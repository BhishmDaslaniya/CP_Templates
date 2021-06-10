//Tree Node structure
struct Node {
	int data; // data value
	struct Node* left; //left pointer
	struct Node* right; //right pointer

	//default constructors
	Node() {
		data = 0;
		left = right = NULL;
	}
	Node(int x) {
		data = x;
		left = right = NULL;
	}
	Node(int x, Node* left, Node* right) {
		data = x;
		left = left;
		right = right;
	}
};

//Function for build tree

/*
-> input in the form of string
For tree like,
	3
   / \
  9  20
    /  \
   15   7

input string = 3 9 20 null null 15 7
*/

Node* buildTree(string str) {
	if (str.length() == 0) {
		return NULL;
	}
	//creating vector of strings from input
	//string after spliting space
	vector<string> ip;


	//input stream
	istringstream iss(str);
	for (string str; iss >> str; ) {
		ip.push_back(str);
	}

	//check if root is null
	if (ip[0] == "null") {
		return NULL;
	}

	//create root node
	Node* root = new Node(stoi(ip[0]));

	queue<Node*> q;
	q.push(root);
	// starting from second element
	int i = 1;
	while (!q.empty() && i < ip.size()) {
		Node* currNode = q.front();
		q.pop();
		string currVal = ip[i];
		//check if left child is not null
		if (currVal != "null") {
			//create new Node type node
			Node* temp = new Node(stoi(currVal));

			// create left child
			currNode->left = temp;

			//push it to queue
			q.push(currNode->left);
		}

		//for right child
		i++;
		if (i >= ip.size()) {
			break;
		}
		currVal = ip[i];

		//check if right child is not null
		if (currVal != "null") {
			//create new Node type node
			Node* temp = new Node(stoi(currVal));

			// create right child
			currNode->right = temp;

			//push it to queue
			q.push(currNode->right);
		}
		i++;
	}
	return root;
}