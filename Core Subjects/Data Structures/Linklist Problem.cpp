// ------------------------------------------
//     These are problems on linked list
// ------------------------------------------
// -- > Sorted Hard Problems to end
//      the easiest one
// ------------------------------------------


/*
 ------------------------------------------
  
 ---> ITERATIVE


 ---> RESCURSIVE

 ------------------------------------------
CHILD NODES
 ---> ITERATIVE
 node *flatenning_list(node *list){
     
     node *end = list;
     while (end -> next) {
         end = end -> next;
     }
     
     node *curr = list;
     while (curr != end) {
         if(curr -> child){
             end -> next = curr -> child;
             node *temp = curr -> child;
             
             while (temp -> next) {
                 temp = temp -> next;
             }
             
             end = temp;
         }
         curr = curr -> next;
     }
     
     return list;
 }

 ------------------------------------------
SWAP CONSECTIVE (ONLY PAIRS)
 ---> ITERATIVE

 void swapPAIRS(node **head) {
     node *temp = *head;
     while(temp -> next) {
         node *N = temp -> next ;
         swap(temp -> data, N -> data);
         temp = N -> next;
     }
    return;
 }
 ---> RESCURSIVE

 node* swapPAIRS(node *head) {
     if(head -> next == NULL) {
         return head;
     }
     node *next = head -> next;
     swap(head -> data,next -> data);
     return swapPAIRS(next -> next);
 }
------------------------------------------
ADDING ONE TO ELEMENTS OF A LIST INTO SECOND LIST
---> ITERATIVE
 
 void insert(node **head,int data) {
     node *newnode = new node(data);
     newnode -> next = NULL;
     node *temp = *head;
     if(*head == NULL) {
         *head = newnode;
         return ;
     }
     while(temp -> next != NULL) {
         temp = temp -> next;
     }
     if(temp -> next == NULL) temp -> next = newnode;
     return ;
 }

 string ADDintostr(node *l1) {
     string result, str1;

     while(l1) {
         str1 += to_string(l1 -> data) ;
         l1 = l1 -> next;
     }

     int num = stol(str1) + 1;
     result = to_string(num);
     return result ;
 }

 node *getNODE(string str,node *newnode) {
     int i = 0;
     while(str[i] != '\0') {
         int num = int(str[i]) - 48;
         insert(&newnode,num);
         i++;
     }
     return newnode;
 }

 node* addONE(node *head) {
     string str = ADDintostr(head);
     node *newnode = NULL;
     return getNODE(str,newnode);
 }
---> RESCURSIVE
 
 node *newnode = new node(data);
 newnode -> next = NULL;
 node *temp = *head;
 if(*head == NULL) {
     *head = newnode;
     return ;
 }
 while(temp -> next != NULL) {
     temp = temp -> next;
 }
 if(temp -> next == NULL) temp -> next = newnode;
 return ;
}

string ADDintostr(node *l1, string str) {
 if(l1 == NULL) {
     int num = stol(str) + 1;
     str = to_string(num);
     return str;
 }
 int num = l1 -> data;
 str += to_string(num);
 return ADDintostr(l1 -> next,str);
}

node *getNODE(string str,node *newnode,int index) {
 if(str[index] == '\0') {
     return newnode ;
 }
 int num = int(str[index]) - 48;
 insert(&newnode,num);
 return getNODE(str, newnode, index + 1);
}

node* addONE(node *head) {
 string str = ADDintostr(head,"");
 node *newnode = NULL;
 return getNODE(str,newnode,0);
}
------------------------------------------
ADDING / SUBTRACTION ELEMENTS OF TWO LIST INTO THIRD
 ---> ITERATIVE
 
 void insert(node **head,int data) {
     node *newnode = new node(data);
     newnode -> next = NULL;
     node *temp = *head;
     if(*head == NULL) {
         *head = newnode;
         return ;
     }
     while(temp -> next != NULL) {
         temp = temp -> next;
     }
     if(temp -> next == NULL) temp -> next = newnode;
     return ;
 }

 string ADDintoTHIRD(node *l1,node *l2) {
     string result, str1, str2;
     while(l1) {
         str1 += to_string(l1 -> data) ;
         l1 = l1 -> next;
     }
     while(l2) {
         str2 += to_string(l2 -> data) ;
         l2 = l2 -> next;
     }
     int num = stol(str1) + stol(str2);
     result = to_string(num);
     return result ;
 }

 node *getthird(string str,node *newnode) {
     int i = 0;
     while(str[i] != '\0') {
         int num = int(str[i]) - 48;
         insert(&newnode,num);
         i++;
     }
     return newnode;
 }

 node* THIRD(node *head,node *head1) {
     string str = ADDintoTHIRD(head,head1);
     node *newnode = NULL;
     return getthird(str,newnode);
 }
 ---> RESCURSIVE
  
 void insert(node **head,int data) {
     node *newnode = new node(data);
     newnode -> next = NULL;
     node *temp = *head;
     if(*head == NULL) {
         *head = newnode;
         return ;
     }
     while(temp -> next != NULL) {
         temp = temp -> next;
     }
     if(temp -> next == NULL) temp -> next = newnode;
     return ;
 }

 string ADDintoTHIRD(node *l1,node *l2, string str1, string str2) {
     if(l1 == NULL && l2 == NULL) {
         int num1 = stol(str1);
         int num2 = stol(str2);
         str1 = "";
         str1 += to_string(num1 + num2);
         return str1;
     }
     str1 += to_string(l1 -> data);
     str2 += to_string(l2 -> data);
     return ADDintoTHIRD(l1 -> next,l2 -> next,str1,str2);
 }

 node *getthird(string str,node *head,int index) {
     if(str[index] == '\0') {
         return head;
     }
     int num = int(str[index]) - 48;
     insert(&head,num);
     return getthird(str,head,index + 1);
 }

 node* THIRD(node *head,node *head1) {
     string str = ADDintoTHIRD(head,head1,"","");
     node *newnode = NULL;
     return getthird(str,newnode,0);
 }
------------------------------------------
MOVE MIDDIUM ELEMENT TO FRONT
---> ITERATIVE
 
 void MIDDLEtoHead(node **head) {
     node *mid = *head;
     int size = 0;
     while(mid) {
         mid = mid -> next;
         size++;
     }

     int mid_pos = (size - 1) / 2;
     mid_pos -= 1;
     node *temp = *head;
     while(mid_pos != 0) {
         temp = temp -> next;
         mid_pos--;
     }
     
     int num = temp -> next -> data ;
     temp -> next = temp -> next -> next;
     node *newnode = new node(num);
     newnode -> next = *head;
     *head = newnode ;
     return ;
 }
---> RESCURSIVE
 
 int getSIZE(node *head) {
     if(head == NULL) return 0;
     return 1 + getSIZE(head -> next);
 }

 int GETMIDDLEele(node *temp,int size) {
     if(size == 0) return temp -> data;
     return GETMIDDLEele(temp -> next,size - 1);
 }

 node *removeMIDDLE(node *temp,int position) {
     if(position == 0) {
         temp -> next = temp -> next -> next;
         return temp;
     }
     return removeMIDDLE(temp -> next, position - 1);
 }

 void MIDDLEtoHead(node **head) {
     node *mid = *head;
     node *temp = *head;

     int size = getSIZE(mid);
     size = size / 2;

     int num = GETMIDDLEele(temp,size);
     temp = removeMIDDLE(temp,size - 1);
     node *newnode = new node(num);
     newnode -> next = *head;
     *head = newnode ;
 }
------------------------------------------
 MOVE LAST ELEMENT TO FRONT
 ---> ITERATIVE
  
 void TAILtoHead(node **head) {
     node *temp = *head;
     while(temp -> next -> next) {
         temp = temp -> next;
     }
     int num = temp -> next -> data;
     temp -> next = NULL;

     node *newnode = new node(num);
     newnode -> next = NULL;
     newnode -> next = *head;
     *head = newnode ;
     return ;
 }
 ---> RESCURSIVE
 
 int gettingEND(node *temp) {
     if(temp -> next -> next == NULL) {
         int num = temp -> next -> data;
         temp -> next = NULL;
         return num;
     }
     return gettingEND(temp -> next);
 }

 void TAILtoHead(node **head) {
     node *temp = *head;
     int num = gettingEND(temp);
     temp = *head;
     node *newnode = new node(num);
     newnode -> next = *head ;
     *head = newnode;
     return ;
 }
------------------------------------------
RETURNING N<TH> ELEMENT IN THE LIST
---> ITERATIVE
 
 int returnNTHele(node * head,int position) {
     if(position == 0) return head -> data;
     while(position) {
         if(head == NULL) {
             cout << "Ower flow " << endl;
             return -1;
         }
         head = head -> next ;
         position--;
     }
     return head -> data;
 }
---> RESCURSIVE
  
 int returnNTHele(node * head,int position) {
     if(position == 0) return head -> data;
     if(head == NULL) {
         cout << "Ower flow "<< endl;
         return -1;
     }
     return returnNTHele(head -> next, position - 1);
 }
 ------------------------------------------
 DELETE MIDDLE ELEMENT IN LIST
 ---> ITERATIVE

 node *deleteMIDDLE(node *head) {
     node *temp = head;
     node *tem = head;
     int size = 1;
     while(temp) {
         temp = temp -> next;
         size++;
     }
     int position = (size - 1) / 2;
     position -= 1;
     while(position) {
         tem = tem -> next;
         position--;
     }
     tem -> next = tem -> next -> next ;
     return head;
 }
 ---> RESCURSIVE
 
 int getsize(node *head) {
     if(head == NULL) return 0;
     return 1 + getsize(head -> next);
 }

 node* getMIDDLE(node *head,int position) {
     if(position == 0) return head -> next = head -> next -> next;
     return getMIDDLE(head -> next, position - 1);
 }

 node *deleteMIDDLE(node *head) {
     int size = getsize(head);
     int position = size / 2;
     position -= 1;
     return getMIDDLE(head, position);
 }
------------------------------------------
DELETE END ELEMENT IN LIST
 ---> ITERATIVE
 
 node *deleteEND(node *head) {
     node *temp = head;
     while(temp -> next -> next) {
         temp = temp -> next;
     }
     temp -> next = NULL;
     return head;
 }
 ---> RESCURSIVE
 
 node *deleteEND(node *head) {
     if(head -> next -> next ==NULL) {
         head -> next = NULL;
         return head;
     }
     return head = deleteEND(head -> next);
 }
------------------------------------------
 SOME NOTES :
 Initialize any other variable and drop it into
 recusive fuction as head point to end value.
 And end value is printed
 --->
 node *temp = head;
 --->
 use temp = deleteEND(temp);
------------------------------------------
 DELETE HEAD ELEMENT IN LIST
 ---> ITERATIVE
 ---> RESCURSIVE
 
 node *deleteHEAD(node *head) {
     head = head -> next;
     return head;
 }
------------------------------------------
PRINT MIDDLE ELEMENT IN LIST
---> ITERATIVE
     
 int getsize(node *head) {
     if(head == NULL) return 0;
     return 1 + getsize(head -> next);
 }

 int getMIDDLE(node *head,int position) {
     if(position == 0) return head -> data;
     return getMIDDLE(head -> next, position - 1);
 }

 int printMIDDLE(node *head) {
     int size = getsize(head);
     int position = size / 2;
     return getMIDDLE(head, position);
 }
---> RESCURSIVE
     
 int printMIDDLE(node *head) {
     node *temp = head;
     node *tem = head;
     int size = 1;
     while(temp) {
         temp = temp -> next;
         size++;
     }
     int position = (size - 1) / 2;
     while(position) {
         tem = tem -> next;
         position--;
     }
     return tem -> data;
 }
------------------------------------------
CHECKING LIST ARE IDENTICAL OR NOT
---> ITERATIVE
     
 bool indentical(node *l1,node *l2) {
     node *temp1 = l1;
     node *temp2 = l2;
     node *temp11 = l1;
     node *temp22 = l2;
     int size1 = 0;
     int size2 = 0;
     while(temp11) {
         temp11 = temp11 -> next;
         size1++;
     }
     while(temp22) {
         temp22 = temp22 -> next;
         size2++;
     }
     if(size1 != size2) return 0;
     while(temp1 && temp2) {
         if(temp1 -> data != temp2 -> data) return 0;
         temp1 = temp1 -> next;
         temp2 = temp2 -> next;
     }
     return 1;
 }
---> RESCURSIVE
     
 bool indentical(node *l1,node *l2) {
     if(l1 != NULL && l2 == NULL) {
         return 0;
     }
     if(l1 == NULL && l2 != NULL) {
         return 0;
     }
     if(l1 == NULL && l2 == NULL) {
         return 1;
     }
     if(l1 -> data != l2 -> data) return 0;
     return indentical(l1 -> next,l2 -> next);
 }
------------------------------------------
DELETING ELEMENT FROM LIST EXCEPT FOR HEAD AND END POSITION
---> ITERATIVE
    
 void deletionexceptHEAD_AND_END(node **head,int pos) {
     node *temp = *head ;
     while(pos != 0) {
         temp = temp -> next;
         pos --;
     }
     temp -> next = temp -> next -> next ;
     return ;
 }
---> RESCURSIVE
    
 void deletionexceptHEAD_AND_END(node *head,node *temp,int pos) {
     if(pos == 0) {
         temp -> next = temp -> next -> next;
         return ;
     }
     deletionexceptHEAD_AND_END(head,temp -> next,pos--);
 }
------------------------------------------
ADDING ELEMENT FROM LIST TO ARRAY
---> ITERATIVE
    
 void arrayele(node *head,int *arr,int i) {
     while(head) {
         arr[i] = head -> data;
         head = head -> next ;
         i++;
     }
     return ;
 }
---> RESCURSIVE
    
 void arrayele(node *head,int *arr,int i) {
     if(head == NULL) return ;
     arr[i] = head -> data;
     arrayele(head->next,arr,i+1);
 }
------------------------------------------
REMOVING EVEN ELEMENT FROM LIST
---> ITERATIVE
    
 node *removingEVENlist(node *head) {
     node *temp = head;
     node *result = NULL;
     while(temp) {
         if(temp -> data % 2 != 0) insert(&result,temp -> data);
         temp = temp -> next ;
     }
     return result ;
 }
---> RESCURSIVE
    
 node *removingEVENlist(node *head,node *result) {
     if(head == NULL) return result;
     if(head -> data % 2 != 0) insert(&result,head -> data);
     return removingEVENlist(head -> next, result);
 }
------------------------------------------
REMOVING ODD ELEMENT FROM LIST
---> ITERATIVE
   
 node* removingODDlist(node *head) {
     node *temp = head ;
     node *result = NULL;
     while(temp) {
         if(temp -> data % 2 == 0) insert(&result,temp -> data);
         temp = temp -> next;
     }
     return result;
 }
---> RESCURSIVE
   
 node* removingODDlist(node *head,node *result) {
     if(head == NULL) return result ;
     if(head -> data % 2 == 0) insert(&result, head -> data);
     return removingODDlist(head -> next, result);
 }
------------------------------------------
 SMALLEST ELEMENT IN LIST
---> ITERATIVE
   
 int minimum(node *head,int small) {
     while(head) {
         small = min(small,head -> data);
         head = head -> next;
     }
     return small ;
 }
---> RESCURSIVE
   
 int minimum(node *head,int small) {
      if(head == NULL) return small;
      if(small > head -> data) small = head -> data;
      return small = minimum(head->next, small);
  }
------------------------------------------
 SOME NOTES :
 Initialize small with any of list element.
------------------------------------------
LARGEST ELEMENT IN LIST
---> ITERATIVE
  
 int largest(node *head,int large) {
     while(head) {
         large = max(large,head -> data);
         head = head -> next;
     }
     return large;
 }
---> RESCURSIVE
  
 int largest(node *head,int large) {
      if(head == NULL) return large;
      large = max(large,head->data);
      return large = largest(head->next, large);
 }
------------------------------------------
 RETURN SUM OF <K> NUMBER OF ELEMENT IN LIST
  ---> ITERATIVE
  
  int sumKNODES(node *head, int k) {
      int sum = 0;

      while(k != 0) {
          if(head == NULL) return sum ;
          sum += head -> data;
          head = head -> next ;
          k--;
      }
      return sum;
  }
  ---> RESCURSIVE

  int sumKNODES(node *head, int k, int sum) {
      if(k == 0) return sum;
      if(head == NULL) return sum;
      sum += head -> data ;
      return sumKNODES(head -> next,k - 1,sum);
  }
------------------------------------------
 HOW MANY TIME SPECIFIC ELEMENT OCCUR IN LIST
---> ITERATIVE
  
 int occurrence(node *head,int ele) {
     int count = 0;
     while (head) {
         if(head -> data == ele) count++;
         head = head -> next ;
     }
     return count ;
 }
---> RESCURSIVE
  
 int occurrence(node *head,int ele,int count) {
     if(head == NULL) return count;
     if(ele == head -> data) count++;
     return count = occurrence(head->next, ele, count);
 }
------------------------------------------
ADDING ALL ELEMENTS OF LIST
 ---> ITERATIVE
 
 int addvaluesoflist(node *head,int sum) {
     while(head) {
         sum += head -> data;
         head = head -> next;
     }
     return sum;
 }
 ---> RESCURSIVE
 
 int addvaluesoflist(node *head,int sum) {
     if(head == NULL) return 0;
     int ele = head -> data;
     return sum += ele + addvaluesoflist(head->next, sum);
 }
------------------------------------------
CONVERTING (INT) LIST INTO ONE STRING
 ---> ITERATIVE
 
 string allelement(node *head,string str) {
     while(head) {
         int num = head -> data ;
         str += to_string(num);
         head = head -> next;
     }
     return str;
 }
 ---> RESCURSIVE
 
 string allelement(node *head,string str) {
     if(head == NULL) return "";
     int ele = head -> data;
     return str += to_string(ele) + allelement(head -> next, str);
 }
------------------------------------------
REVERSE OF LINKED LIST
 ---> ITERATIVE
 
 void reverse(node **head) {
     node *cur = *head ;
     node *next = NULL;
     node *prev = NULL;

     while (cur) {
         next = cur -> next;
         cur -> next = prev ;
         prev = cur;
         cur = next ;
     }
     *head = prev;
 }
------------------------------------------
 SOME NOTES :
 React same as the animation shows.
------------------------------------------
LENGTH OF LINKED LIST --->
 ---> RESCURSIVE
  
 int lengthoflist(node *head,int length) {
     if(head == NULL) return length ;
     return lengthoflist(head -> next, length+1);
 }
  ---> ITERATIVE
  
 int lengthoflist(node *head) {
     node *temp = head;
     int length = 0;
     while(temp) {
         temp = temp -> next;
         length++;
     }
     return length;
 }
------------------------------------------
 PRINTING NODES
  ---> ITERATIVE
    
  void print(node *head) {
      node *temp = head;
      while(temp) {
          cout << temp -> data <<" ";
          temp = temp -> next;
      }
      cout << endl;
      return ;
  }
  ---> RESCURSIVE
  
  void print(node *head) {
      if(head == NULL) {
          cout << endl;
          return ;
      }
      cout << head -> data << " ";
      print(head -> next);
  }
------------------------------------------
SEARCH ELEMENT IN LINKED LIST --->
---> RESCURSIVE
 
 bool searchele(node *head,int ele) {
     if(head == NULL) return 0;
     if(head -> data == ele) return 1;
     return searchele(head -> next,ele);
 }
 ---> ITERATIVE
 
 bool searchele(node *head,int ele) {
     node *temp = head;
     while(temp) {
         if(temp -> data == ele) return 1;
         temp = temp -> next;
     }
     return 0;
 }
------------------------------------------
*/
