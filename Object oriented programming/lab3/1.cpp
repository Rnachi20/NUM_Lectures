#include <iostream>
#include <cstring>
using namespace std;

class worker{
    private:
		int number;
		char name[20];
		char pos[10];
		float time;
    public:
		void setInfo() {
  			number=0;
  			strcpy(name, "");
  			strcpy(pos, "ajilchin");
  			time=0;
		}

		void changeInfo() {
    		cout<<"ID:";
    		cin>>this->number;
    		cout<<"Ner:";
    		cin>>this->name;
    		cout<<"Alban tushaal:";
    		cin>>this->pos;
    		cout<<"Ajillasan tsag:";
   			cin>>this->time;
		}

		void showInfo(){
    		cout<<"ID:"<<this->number<<endl;
    		cout<<"Ner:"<<this->name<<endl;
    		cout<<"Alban tushaal:"<<this->pos<<endl;
    		cout<<"Ajillasan tsag:"<<this->time<<endl;
		}
		
		float zahiralSalary() {
			return this->time * 5000;
		}
		
		float salary() {
			float sal = this->time * 3500;
			if(strcmp(this->pos, "zahiral") == 0) {
				sal += this->zahiralSalary();
			}
			return sal;
		}
		
		bool addTime(float time) {
			if(time >=0 && time <= 24) {
				this->time += time;
				return 1;
			}
			return 0;
		}
};

int main() {
    int n;
    cout << "Heden ajiltantai ve?" << endl;
    cin >> n;
    int i;
    worker a[n];
    for (i = 0; i < n; i++) {
        cout << i + 1 << "-r Ajilchinii medeelel avah:" << endl;
        a[i].changeInfo();
    }

    for (i = 0; i < n; i++) {
        cout << i + 1 << "-r Ajilchinii medeelel:" << endl;
        a[i].showInfo();
        cout <<a[i].salary()<<endl;
    }
    for (i = 0; i < n; i++) {
        cout << i + 1 << "-r Ajilchinii tsag nemegduuleh" << endl;
        float addTime;
        cin >> addTime;
        a[i].addTime(addTime);
        cout << endl;
    }
    for (i = 0; i < n; i++) {
        cout << i + 1 << "-r Ajilchinii medeelel:" << endl;
        a[i].showInfo();
        cout <<a[i].salary()<<endl;
        cout << endl;
    }
    return 0;
}