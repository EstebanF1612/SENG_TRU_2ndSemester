#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book{
    private:
        string Title;
        string ISBN;
        string Status;
        string Name;
        int NumCopiesHeld;
    public:
        Book(){
            Title = "NaN";
            ISBN = "NaN";
            Status = "NaN";
            Name = "NaN";
            NumCopiesHeld = 0;
        }
        Book(string NewTitle, string NewISBN, string NewStatus, string NewName, int NewCopies){
            Title = NewTitle;
            ISBN = NewISBN;
            Status = NewStatus;
            Name = NewName;
            NumCopiesHeld = NewCopies;
        }

        string GetTitle(){
            return Title;   
        }

        string GetISBN(){
            return ISBN;   
        }
        
        string GetStatus(){
            return Status;
        }

        string GetName(){
            return Name;   
        }

        int GetNumCopiesHeld(){
            return NumCopiesHeld;
        }

        void SetTitle(string newTitle){
            Title = newTitle;
        }


        void SetISBN(string newISBN){
            ISBN = newISBN;
        }


        void SetStatus(string newStatus){
            Status = newStatus;
        }


        void SetName(string newName){
            Name = newName;
        }

        void setNumCopiesHeld(int newNum){
            NumCopiesHeld = newNum;
        }

};
#endif