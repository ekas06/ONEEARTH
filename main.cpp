#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
class userinfo {
private:
  string name;
  int age;
  int yearofexp;
  string abouturself;

public:
  void setinfo() {
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your year of experience: ";
    cin >> yearofexp;
    cout << "Enter your about yourself(in max 200 characters seperated by "
            "undercore): ";
    cin >> abouturself;
  }
  void getinfo() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Year of experience: " << yearofexp << endl;
    cout << "About yourself: " << abouturself << endl;
  }
  void endline() {
    cout << "Thank you for filling the form please send ur resume at our "
            "official email id"
         << endl;
    cout << "Date of your interview will be sent to you soon" << endl;
    cout << "Please check all your information if its correct" << endl;
  }
};
class technical : public userinfo {
  string q1;
  string q2;
  string q3;

public:
  void ques() {
    cout << "PLEASE USE UNDERSCORE INSTEAD OF SPACE DURING ANSWERS" << endl;
    cout << "1. What are the languages you use for development" << endl;
    cin >> q1;
    cout << "2. How many web projects have you built till date" << endl;
    cin >> q2;
    cout << "3. Explain any one of your projects" << endl;

    cin >> q3;
  }
};
class marketing : public userinfo {
  string q1;
  string q2;
  string q3;

public:
  void ques() {
    cout << "PLEASE USE UNDERSCORE INSTEAD OF SPACE DURING ANSWERS" << endl;
    cout << "1. Please explain how will you promote an event without social "
            "media"
         << endl;
    cin >> q1;
    cout << "2. Please explain the basic principles of marketing" << endl;
    cin >> q2;
    cout << "3. Write contents of a poster to market tree planting awareness "
            "event"
         << endl;

    cin >> q3;
  }
};
class finance : public userinfo {
  string q1;
  string q2;
  string q3;

public:
  void ques() {
    cout << "PLEASE USE UNDERSCORE INSTEAD OF SPACE DURING ANSWERS" << endl;
    cout << "1. Please explain financial modeling" << endl;
    cin >> q1;
    cout << "2. Please explain the financial statement" << endl;
    cin >> q2;
    cout << "3. What are things you should keep in mind while handling a non "
            "profitable oranisation finances"
         << endl;
    cin >> q3;
  }
};
class operations : public userinfo {
  int q1;

public:
  void displayoppinfo() {
    cout << "Which of the following work are you willing to do" << endl;
    cout << "1. Networking" << endl;
    cout << "2. Delivery" << endl;
    cout << "3. Management" << endl;
    cout << "enter 1,2,3 as your answer" << endl;
    cin >> q1;
  }
  void displayoppinfo1() { cout << "You chose option " << q1 << endl; }
};
class volunteer : public userinfo {
  int q1;

public:
  void getinfo1() {
    cout << "Which of the following work are you willing to do" << endl;
    cout << "1. Save Tap Water Project" << endl;
    cout << "2. Swach Vatavaran Project" << endl;
    cin >> q1;
  }
  void endline2() {
    cout << "Your response has been stored Thank You" << endl;
    cout << "Our team will reach out to you soon" << endl;
  }
};

int main() {
  while (1) {
    cout << "WELCOME TO ONE EARTH" << endl;
    cout << "press 1 to continue" << endl;
    cout << "press 2 to exit" << endl;
    int choice;
    cin >> choice;
    if (choice == 2) {
      break;
    }

    cout << "CHOOSE 1 IF YOU WANT TO DONATE" << endl;
    cout << "CHOOSE 2 IF YOU WANT TO RECEIVE DONATIONS" << endl;
    cout << "CHOOSE 3 IF YOU WANT TO KNOW ABOUT US" << endl;
    cout << "CHOOSE 4 IF YOU WANT TO JOIN US IN THIS PROGRAM" << endl;
    cout << "CHOOSE 5 IF YOU WANT TO KNOW ABOUT OUR PROJECT AND CAMPAIGN(other "
            "than charity)"
         << endl;

    while (1) {

      int choose;
      cin >> choose;
      if (choose == 1) {
        cout << "What would you like to donate" << endl;
        cout << "1 Food" << endl;
        cout << "2 Clothes" << endl;
        cout << "3 Money" << endl;
        cout << "4 Others" << endl;
        int choose1;
        cin >> choose1;
        if (choose1 == 1) {
          cout << "How many type of food items whould you like to donate"
               << endl;
          int n;
          cin >> n;
          string food[n];
          float weight[n];
          for (int i = 0; i < n; i++) {
            cout << "Enter the name of the food item" << endl;
            cin >> food[i];
          }
          for (int i = 0; i < n; i++) {
            cout << "Enter the weight of " << food[i] << " in kg:" << endl;
            cin >> weight[i];
          }
          cout << "Thank you for donating food" << endl;
          cout << "Our staff will contact you soon to take following items"
               << endl;
          for (int i = 0; i < n; i++) {
            cout << i + 1 << ". " << weight[i] << "kg of " << food[i] << endl;
          }

        } else if (choose1 == 2) {
          cout << "How many clothes whould you like to donate" << endl;
          int n;
          cin >> n;
          string clothes[n];
          for (int i = 0; i < n; i++) {
            cout << "Enter the size of " << i + 1 << " the cloth" << endl;
            cin >> clothes[i];
          }
          cout << "Thank you for donating clothes" << endl;
          cout << "Our staff will contact you soon to take following items"
               << endl;
          for (int i = 0; i < n; i++) {
            cout << i + 1 << ". " << clothes[i] << endl;
          }
        } else if (choose1 == 3) {
          cout << "where would you like to donate you money" << endl;
          cout << "1. Orphanage" << endl;
          cout << "2. Hospital" << endl;
          cout << "3. School" << endl;
          cout << "4. Chairty NGO" << endl;
          int choose2;
          cin >> choose2;
          if (choose2 == 1) {
            cout << "Here are list of differnt orphanges, you can click in any "
                    "of them and donate"
                 << endl;
            cout << "1. Smile Foundation" << endl;
            cout << "2. Heaven of Hopes" << endl;
            cout << "3. Prerna Ashram" << endl;
            cout << "4. Ashirwas Niwas" << endl;
            cout << "5. Serenity Shelter" << endl;
          } else if (choose2 == 2) {
            cout << "Here are list of differnt hospitals, you can click in any "
                    "of them and donate"
                 << endl;
            cout << "1.Max Hospital" << endl;
            cout << "2. Apollo Saraswati Hospital" << endl;
            cout << "3. Remedy Hospital" << endl;
          } else if (choose2 == 3) {
            cout << "Here are list of differnt schools, you can click in any "
                    "of them and donate"
                 << endl;
            cout << "1. Saraswati Vidya Mandir" << endl;
            cout << "2. Areaca School" << endl;
            cout << "3. Unacco school" << endl;
          } else {
            cout << "Here are list of differnt NGOs, you can click in any of "
                    "them and donate"
                 << endl;
            cout << "1. Cancer Fighters" << endl;
            cout << "2. Hemkunt Foundations" << endl;
            cout << "3. Khalsa Aid" << endl;
            cout << "4. No More Depression" << endl;
          }
        } else if (choose1 == 4) {
          cout << "What would you like to donate please write a small "
                  "description about it(use underscore for blank)"
               << endl;
          string donate;
          cin >> donate;
          cout << "Thank you for donating our staff will contact you soon"
               << endl;
        }

      } else if (choose == 2) {
        cout << "How can we help you?" << endl;
        cout << "We are an NGO which deals with various type of charity"
             << endl;
        cout << "Please contact us on our email:Onnearth@gmail.com" << endl;
        cout << "You can also contact us on our instagram handle: 01earth.in'"
             << endl;
      } else if (choose == 3) {
        cout
            << "One Earth: Your Gateway to Giving Back .One earth is a "
               "non-profit organization on a mission to cultivate a spirit of "
               "generosity and empower individuals to make a real difference. "
               "We bridge the gap between those who want to help and those who "
               "need it most. By providing a variety of impactful giving "
               "opportunities, One Earth allows you to donate your time, "
               "resources, or skills to create positive change within your "
               "community. Donate with Ease: Food: Curb hunger from your "
               "doorstep. Donate leftover, wholesome food items, and our "
               "dedicated team will arrange a convenient pick-up directly from "
               "your home. Let's fight hunger together. Belongings: Donate "
               "gently used furniture, toys, or household items for a fresh "
               "start. We ensure they reach those in need, with convenient "
               "pick-up options available. Money: Your financial contributions "
               "allow us to purchase essential supplies and support our "
               "ongoing programs. Every rupee makes a difference! Clothes: "
               "Provide a second life for your clean, gently used clothing "
               "(all sizes). We pick up donations and ensure they reach "
               "shelters, community centers, and those in need. Volunteer Your "
               "Time: One Earth thrives on the dedication of volunteers. Here "
               "are some ways you can contribute your skills and energy: Food "
               "Distribution: Help pack and distribute groceries to families "
               "in need. Sorting Donations: Sort through donated clothing, "
               "household items, and toys to ensure they are in good "
               "condition. Community Events: Assist with fundraising events, "
               "food drives, and other community outreach activities. "
               "Administrative Support: Offer your skills in data entry, "
               "social media management, or other administrative tasks. Food "
               "Rescue Program: Do you have a restaurant, grocery store, or "
               "catering business with leftover food that's still perfectly "
               "good? One Earth offers a Food Rescue Program! We can arrange "
               "pick-up of surplus food to ensure it nourishes those in need "
               "instead of going to waste. Getting Involved is Easy!"
            << endl;
        cout << "You can also call us at 0866053895 or email us at "
                "Oneearth@gmail.com ."
             << endl;
        cout << "You can also contact us on our instagram handle: 01earth.in'"
             << endl;
        cout
            << "Together, we can make a difference! Join One Earth and be a "
               "part of creating a more compassionate and supportive community."
            << endl;

      } else if (choose == 4) {
        cout << "In which department would you like to join us" << endl;
        cout << "1. Technical" << endl;
        cout << "2. Marketing" << endl;
        cout << "3. Finance" << endl;
        cout << "4. Operations" << endl;
        int choose3;
        cin >> choose3;
        if (choose3 == 1) {
          cout << "You have chosen to join our technical department" << endl;
          cout << "Please fill the form below" << endl;
          technical u;
          u.setinfo();
          u.ques();
          u.endline();
          u.getinfo();

        } else if (choose3 == 2) {
          cout << "You have chosen to join our marketing department" << endl;
          cout << "Please fill the form below" << endl;
          marketing u;
          u.setinfo();
          u.ques();
          u.endline();
          u.getinfo();
        } else if (choose3 == 3) {
          cout << "You have chosen to join our finance department" << endl;
          cout << "Please fill the form below" << endl;
          finance f;
          f.setinfo();
          f.ques();
          f.endline();
          f.getinfo();
        } else if (choose3 == 4) {
          cout << "You have chosen to join our operations department" << endl;
          cout << "Please fill the form below" << endl;
          operations o;
          o.setinfo();
          o.displayoppinfo();
          o.endline();
          o.getinfo();
          o.displayoppinfo1();
        }

      } else if (choose == 5) {
        cout << "Which project would you like to know" << endl;
        cout << "1. Past" << endl;
        cout << "2. Ongoing" << endl;
        cout << "3. Upcoming" << endl;
        int choose4;
        cin >> choose4;
        if (choose4 == 1) {
          cout << "Some of Our past programs are" << endl;
          cout << "1. Save Ocean Project" << endl;
          cout << "2. African Tiger Project" << endl;
          cout << "3. Assam Rhino Project" << endl;
        } else if (choose4 == 2) {
          cout << "Some of our ongoing projects are" << endl;
          cout << "1. Plant 1000000 trees" << endl;
          cout << "2. Save Air Project" << endl;
        } else if (choose4 == 3) {
          cout << "Some of our upcoming projects are" << endl;
          cout << "1. Save Tap Water Project" << endl;
          cout << "2. Swach Vatavaran Project" << endl;
          cout << "If you want to be part of this project please choose 1 to "
                  "fill form else choose 2"
               << endl;
          int choose5;
          cin >> choose5;
          if (choose5 == 1) {
            cout << "Please fill the form below" << endl;
            volunteer v;
            v.setinfo();
            v.getinfo1();
            v.endline2();
          }
        }
      }
      int x;
      cout << "Press 0 to go to homepage" << endl;
      cin >> x;
      if (x == 0) {
        break;
      }
    }
  }
}


//Amrutha Varshini Y 23BCE2073
//Krishnapriya P 23BCE2230
//Udit Vashisht 23BDS0172
//Pranjal Bajwa 23BCE2057
//lanka sree chathurya 23BCE2050
//Ekaspreet Singh Setia 23BCE0528
