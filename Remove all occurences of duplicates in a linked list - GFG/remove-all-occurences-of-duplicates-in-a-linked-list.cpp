// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

 // } Driver Code Ends
//User function Template for C++

/* Linked List node structure
    
struct Node {
	int data;
	struct Node *next;
};

*/

class Solution
{
    public:
 struct Node *removeAllDuplicates(struct Node *head)
{
    //Base Condition
    if (head == NULL || head->next == NULL)
        return head;

    Node *dummy = new Node(-1), *prev = dummy, *tmp = head;
    dummy->next = head;
    while (tmp != NULL)
    {
        bool active = false;
        while (tmp->next != NULL and tmp->data == tmp->next->data)
        {
            active = true;
            tmp = tmp->next;
        }
        if(active)
        {
            tmp = tmp->next;
            if(tmp && tmp->next and tmp->data != tmp->next->data)
            {
                prev->next = tmp;
                prev = tmp;
                tmp = tmp->next;
            }
        }
        else
        {
            prev->next = tmp;
            prev = tmp;
            tmp = tmp->next;
        }
    }
    prev->next = nullptr;
    return dummy->next;
}
};

// { Driver Code Starts.
/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}



// Driver program to test above functions
int main()
{
	int T;
	cin >> T;


	while (T--)
	{
		int N;

		cin >> N ;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < N; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

		Solution ob;
		head = ob.removeAllDuplicates(head);
		printList(head);

		cout << "\n";


	}
	return 0;
}
  // } Driver Code Ends