#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int choice;
    cout<<"==================================================\n";
    cout<< "  Welcome to The Lost Treasure of Eldoria\n";
    cout<<"==================================================\n";
    cout<<"\nEnter your name,brave adventurer :";
    getline(cin, name);
    cout<<"\nGreetings , "<<name<<"! Your quest beings in the ancient jungle of Eldoria.\n";
    cout<<"Legends say a treasure is hidden deep within,guarded by traps and ancient magic.\n";
    cout<<"\nYou reach a fork in the path.Do you :\n";
    cout<<"1.Take the path through the dark forest.\n";
    cout<<"2.Cross the old rope bridge over the canyon.\n";
    cout<<"enter the choice(1 or 2):";
    cin>>choice;
    if(choice==1){
        cout<<"\nYou enter the dark forest.It's eerily quiet.\n";
        cout<<"Suddenly, a wild beast appears !\n";
        cout<<"Do you :\n";
        cout<<"1.Fight the beast.\n";
        cout<<"2.Climb a tree to hide.\n";
        cout<<"Enter choice (1 or 2):";
        cin>>choice;
        if(choice==1){
            cout << "\nYou run quickly and barely make it across as the bridge falls behind you!\n";
            cout << "You find a cave with ancient carvings. Inside, a stone pedestal holds a shining gem.\n";
            cout << "You take it, and the ground trembles. You've found the Heart of Eldoria!\n";
            cout << " Congratulations, " << name << "! You found a legendary artifact!\n";

        }
        else{
            cout << "\nYou hide in the tree, but the beast smells you and waits below.\n";
            cout << "After hours of waiting, you fall asleep and slip. The beast catches you.\n";
            cout << " Sadly, your journey ends here.\n";        
        }
    }
    else if(choice ==2){
        cout << "\nYou step onto the creaky rope bridge. Halfway through, it starts to break!\n";
        cout << "Do you:\n";
        cout << "1. Run as fast as you can.\n";
        cout << "2. Carefully turn back.\n";
        cout << "Enter choice (1 or 2): ";
        cin >> choice;
        if (choice == 1) {
            cout << "\nYou run quickly and barely make it across as the bridge falls behind you!\n";
            cout << "You find a cave with ancient carvings. Inside, a stone pedestal holds a shining gem.\n";
            cout << "You take it, and the ground trembles. You've found the Heart of Eldoria!\n";
            cout << " Congratulations, " << name << "! You found a legendary artifact!\n";
        } else {
            cout << "\nAs you turn back, the bridge collapses, and you fall into the canyon.\n";
            cout << "Your journey ends in the depths of Eldoria.\n";
        }
        }else{
            cout<<"\nInvalid choice!n Lost and confused,you wander until night falls.\n";
            cout<<"You are never heard from again.\n";
        }
        cout << "\nThank you for playing, " << name << "! Adventure awaits again someday...\n";
    return 0;


        
    }

