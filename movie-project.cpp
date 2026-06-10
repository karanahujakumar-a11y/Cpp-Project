#include <iostream>
using namespace std;

void DisplayAction();
void Ratings(float rating);
int Choice(void);
void SearchMovie(string query);
void Mood(string mood);


int main ()
{
	int choice;
	string genre,query,mood;
	float rating;
	
	
    cout<<"-------------------------------------------MOVIE RECOMMENDATION SYSTEM-------------------------------------------------------------------------"<<endl<<endl;	
	do{
   	
        choice=Choice();
        
    if(choice==1)
    {
    	cout<<" YOU CHOSE TO GET MOVIES "<<endl;
    	cout<<" GENRE : ACTION, ROMANTIC, FAMILY, COMEDY, SCI-FI, R-RATED"<<endl;
    	cout<<" ENTER YOUR MOVIE GENRE ";
    	getline(cin,genre);
    	
    	if(genre=="Action")
    	{
    	  	DisplayAction();
    		
		}
		
		 else if(genre=="ROMANTIC MOVIES")
		{
			cout<<" HERE ARE THE TOP 10 MOVIES YOU CAN GIVE A TRY "<<endl;
			cout<<"1. The Notebook (2004) Director: Nick Cassavetes  Stars: Ryan Gosling, Rachel McAdams"<<endl;
            cout<<"2. Titanic (1997)    Director: James Cameron    Stars: Leonardo DiCaprio, Kate Winslet"<<endl;
            cout<<"3. Pride & Prejudice (2005)   Director: Joe Wright  Stars: Keira Knightley, Matthew Macfadyen"<<endl;
            cout<<"4. La La Land (2016)  Director: Damien Chazelle  Stars: Ryan Gosling, Emma Stone"<<endl;
            cout<<"5. Casablanca (1942)  Director: Michael Curtiz  Stars: Humphrey Bogart, Ingrid Bergman"<<endl;
            cout<<"6. When Harry Met Sally... (1989)  Director: Rob ReinerStars: Billy Crystal, Meg Ryan"<<endl;
            cout<<"7. A Star Is Born (2018) Director: Bradley Cooper  Stars: Lady Gaga, Bradley Cooper"<<endl;  
            cout<<"8. Notting Hill (1999)  Director: Roger Michell  Stars: Julia Roberts, Hugh Grant"<<endl;
            cout<<"9. Love Actually (2003)Director: Richard Curtis  Stars: Hugh Grant, Keira Knightley, Liam Neeson"<<endl;
            cout<<"10. Eternal Sunshine of the Spotless Mind (2004)  Director: Michel Gondry  Stars: Jim Carrey, Kate Winslet"<<endl;
            cout<<"---------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
			
		}
		
		else if(genre == "Family") 
		{
            cout<<" HERE ARE THE TOP 10 FAMILY MOVIES YOU CAN GIVE A TRY: "<<endl;
            cout<<"1. The Lion King (1994)"<<endl;
            cout<<"2. Toy Story (1995)"<<endl;
            cout<<"3. Finding Nemo (2003)"<<endl;
            cout<<"4. Harry Potter and the Sorcerer�s Stone (2001)"<<endl;
            cout<<"5. Frozen (2013)"<<endl;
            cout<<"6. The Incredibles (2004)"<<endl;
            cout<<"7. Shrek (2001)"<<endl;
            cout<<"8. Coco (2017)"<<endl;
            cout<<"9. Beauty and the Beast (1991)"<<endl;
            cout<<"10. Moana (2016)"<<endl;
            cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
        }
        
		 else if(genre == "Comedy") 
		 {
            cout<<" HERE ARE THE TOP 10 COMEDY MOVIES YOU CAN GIVE A TRY: "<<endl;
            cout<<"1. The Hangover (2009)"<<endl;
            cout<<"2. Superbad (2007)"<<endl;
            cout<<"3. Step Brothers (2008)"<<endl;
            cout<<"4. Groundhog Day (1993)"<<endl;
            cout<<"5. Bridesmaids (2011)"<<endl;
            cout<<"6. Dumb and Dumber (1994)"<<endl;
            cout<<"7. Monty Python and the Holy Grail (1975)"<<endl;
            cout<<"8. Mean Girls (2004)"<<endl;
            cout<<"9. Deadpool (2016)"<<endl;
            cout<<"10. Tropic Thunder (2008)"<<endl;
            cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
        }
        
        else if(genre == "Sci-fi") 
		{
            cout<<" HERE ARE THE TOP 10 SCI-FI MOVIES YOU CAN GIVE A TRY: "<<endl;
            cout<<"1. Interstellar (2014)"<<endl;
            cout<<"2. Blade Runner 2049 (2017)"<<endl;
            cout<<"3. Arrival (2016)"<<endl;
            cout<<"4. The Matrix (1999)"<<endl;
            cout<<"5. Inception (2010)"<<endl;
            cout<<"6. Dune (2021)"<<endl;
            cout<<"7. Star Wars: A New Hope (1977)"<<endl;
            cout<<"8. Guardians of the Galaxy (2014)"<<endl;
            cout<<"9. Avatar (2009)"<<endl;
            cout<<"10. E.T. the Extra-Terrestrial (1982)"<<endl;
            cout<<"-------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
        }
         else if(genre == "R-Rated") 
		 {
            cout<<" HERE ARE THE TOP 10 R-RATED MOVIES YOU CAN GIVE A TRY: "<<endl;
            cout<<"1. The Wolf of Wall Street (2013)"<<endl;
            cout<<"2. Pulp Fiction (1994)"<<endl;
            cout<<"3. Joker (2019)"<<endl;
            cout<<"4. Fight Club (1999)"<<endl;
            cout<<"5. Deadpool (2016)"<<endl;
            cout<<"6. The Shawshank Redemption (1994)"<<endl;
            cout<<"7. Logan (2017)"<<endl;
            cout<<"8. The Godfather (1972)"<<endl;
            cout<<"9. Inglourious Basterds (2009)"<<endl;
            cout<<"10. Goodfellas (1990)"<<endl;
            cout<<"----------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
        }
        else {
            cout<<" INVALID GENRE ENTERED. PLEASE TRY AGAIN."<<endl<<endl;
        }
        
	}
     
     if(choice==2)
     {
     	
     	cout<<" YOU CHOSE TO GET TOP 10 BLOCKBUSTER MOVIES "<<endl;
     	cout<<" HERE ARE THE TOP 10  BLOCKBUSTER MOVIES "<<endl;
     	cout<<"1. Avatar (2009) Director: James Cameron   Box Office: $2.92 billion"<<endl;
        cout<<"2. Avengers: Endgame (2019) Director: Anthony and Joe Russo    Box Office: $2.79 billion"<<endl;
        cout<<"3. Titanic (1997) Director: James Cameron    Box Office: $2.25 billion"<<endl;
        cout<<"4. Star Wars: The Force Awakens (2015) Director: J.J. Abrams    Box Office: $2.07 billion"<<endl;
        cout<<"5. Avengers: Infinity War (2018)Director: Anthony and Joe Russo  Box Office: $2.05 billion"<<endl;
        cout<<"6. Spider-Man: No Way Home (2021)Director: Jon Watts    Box Office: $1.92 billion"<<endl;
        cout<<"7. Jurassic World (2015)  Director: Colin Trevorrow      Box Office: $1.67 billion"<<endl;
        cout<<"8. The Lion King (2019)  Director: Jon Favreau  Box Office: $1.66 billion"<<endl;
        cout<<"9. The Avengers (2012)Director: Joss Whedon     Box Office: $1.52 billion"<<endl;
        cout<<"10. Frozen II (2019)     Director: Chris Buck, Jennifer Lee  Box Office: $1.45 billion"<<endl;
        cout<<"-------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
	 }
     
      if(choice==3)
      {
     	cout<<"YOU CHOSE TO SEARCH BY RATING "<<endl;
     	cout<<" ENTER THE MOVIE RATING TO GET RECOMMENDATIONS  : ";
     	cin>>rating;
     	
     	
    if (rating >= 9.0) 
	{
        Ratings(rating);
    }
	    
	 else if(rating >= 8.0 && rating < 9.0) 
	 {
        cout<<" HERE ARE SOME POPULAR MOVIES WITH RATINGS BETWEEN 8.0 AND 8.9: "<<endl;
        cout<<"1. Inception (2010) - Rating: 8.8"<<endl;
        cout<<"2. Interstellar (2014) - Rating: 8.6"<<endl;
        cout<<"3. Parasite (2019) - Rating: 8.5"<<endl;
        cout<<"4. The Matrix (1999) - Rating: 8.7"<<endl;
        cout<<"5. Gladiator (2000) - Rating: 8.5"<<endl;
        cout<<"6. Whiplash (2014) - Rating: 8.5"<<endl;
        cout<<"7. The Prestige (2006) - Rating: 8.5"<<endl;
        cout<<"8. Avengers: Endgame (2019) - Rating: 8.4"<<endl;
        cout<<"--------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
      }
    
	 else if(rating>=7.0 && rating<8.0)
	  {
        cout<<" HERE ARE SOME MOVIES WITH RATINGS BETWEEN 7.0 AND 7.9: "<<endl;
        cout<<"1. Avengers: Age of Ultron (2015) - Rating: 7.3" <<endl;
        cout<<"2. The Hunger Games (2012) - Rating: 7.2" <<endl;
        cout<<"3. The Maze Runner (2014) - Rating: 7.1" <<endl;
        cout<<"4. Jurassic World (2015) - Rating: 7.0" <<endl;
        cout<<"5. Divergent (2014) - Rating: 7.0" <<endl;
        cout<<"6. The Hobbit: An Unexpected Journey (2012) - Rating: 7.8" <<endl;
        cout<<"7. Tron: Legacy (2010) - Rating: 7.0" <<endl;
        cout<<"8. Doctor Strange (2016) - Rating: 7.5" <<endl;
        cout<<"------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
      } 
	
	else
	 {
        cout<<"NO MOVIES FOUND FOR THE GIVEN RATING RANGE. PLEASE TRY A HIGHER RATING."<<endl;
     }
     
     
     
       }
       
       
       if(choice==4)
       {
       	     cout<<" ENTER THE MOVIE NAME TO SEARCH  ";
       	     getline(cin,query);
       	     SearchMovie(query);
	   }
	   
	   if(choice==5)
	   {
	   	    cout<<"YOU CHOSE TO GET PERSONALIZED RECOMMENDATIONS BASED ON MOOD"<<endl;
            cout << "ENTER YOUR MOOD (happy, adventurous, romantic, family, sci-fi, r-rated):  ";
            getline(cin, mood);
			Mood(mood); 
	   	
	   }
       
       
	   
	   if(choice==6)
	 {
	 	cout<<" \n YOU CHOOSE TO EXIT!! "<<endl;
	 	cout<<" GOOD DAY!"<<endl;
	 }
    
    
}while(choice!=6);
    
  return 0;

}


void DisplayAction()
{
	       cout<<" HERE ARE THE TOP 10 MOVIES YOU CAN GIVE A TRY "<<endl;
           cout<<"1. Die Hard (1988) Director: John McTiernan  Stars: Bruce Willis, Alan Rickman"<<endl<<"2. Mad Max: Fury Road (2015) Director: George Miller Stars: Tom Hardy, Charlize Theron"<<endl;
           cout<<"3. The Dark Knight (2008) Director: Christopher Nolan Stars: Christian Bale, Heath Ledger"<<endl; 
           cout<<"4. Terminator 2: Judgment Day (1991)  Director: James Cameron  Stars: Arnold Schwarzenegger, Linda Hamilton"<<endl;
           cout<<"5. John Wick (2014)   Director: Chad Stahelski  Stars: Keanu Reeves"<<endl;
           cout<<"6. The Matrix (1999) Director: The Wachowskis  Stars: Keanu Reeves, Laurence Fishburne"<<endl;
           cout<<"7. Gladiator (2000)  Director: Ridley Scott  Stars: Russell Crowe, Joaquin Phoenix"<<endl; 
           cout<<"8. Inception (2010)  Director: Christopher Nolan  Stars: Leonardo DiCaprio, Tom Hardy"<<endl;
           cout<<"9. The Avengers (2012)   Director: Joss Whedon  Stars: Robert Downey Jr., Chris Evans"<<endl;
           cout<<"10. Mission: Impossible � Fallout (2018)  Director: Christopher McQuarrie   Stars: Tom Cruise, Henry Cavill"<<endl;
           cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
	
}

void Ratings(float rating)
{
	    cout<<" HERE ARE SOME HIGHLY RATED MOVIES (9.0 AND ABOVE): "<<endl;
        cout<<"1. The Shawshank Redemption (1994) - Rating: 9.3"<<endl;
        cout<<"2. The Godfather (1972) - Rating: 9.2"<<endl;
        cout<<"3. The Dark Knight (2008) - Rating: 9.0"<<endl;
        cout<<"4. Schindler's List (1993) - Rating: 9.0"<<endl;
        cout<<"5. The Lord of the Rings: The Return of the King (2003) - Rating: 9.0"<<endl;
        cout<<"6. Pulp Fiction (1994) - Rating: 9.0"<<endl;
        cout<<"7. The Good, the Bad and the Ugly (1966) - Rating: 9.0"<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
	
}

int Choice (void)
{
	int choice;
	cout<<" PRESS 1 TO GET RECOMMENDED MOVIES "<<endl;
	cout<<" PRESS 2 TO GET TOP 10 BLOCKBUSTER MOVIES "<<endl;
	cout<<" PRESS 3 TO GET YOUR CHOICE RATED MOVIES "<<endl;
	cout<<" PRESS 4 TO SEARCH FOR ANY MOIVE NAME "<<endl;
	cout<<" PRESS 5 TO GET MOVIES ON YOUR CURRENT MOOD "<<endl;
    cout<<" PRESS 6 TO EXIT  "<<endl;
    cout<<" ENTER YOUR CHOICE : ";
    cin>>choice;
    cin.ignore();
    
    return choice;
}


void SearchMovie(string query)
{

    cout<<"Searching for movies with '"<<query<<"'..."<<endl<<endl;

    // Action Movies
    if (query == "Die Hard") 
	{
        cout<<"Found: Die Hard (1988), Director: John McTiernan, Stars: Bruce Willis, Alan Rickman"<<endl<<endl;   
    } 
	else if (query == "Mad Max: Fury Road") 
	{
        cout<<"Found: Mad Max: Fury Road (2015), Director: George Miller, Stars: Tom Hardy, Charlize Theron"<<endl<<endl;   
    }
	 
	else if (query == "The Dark Knight")
	{
        cout<<"Found: The Dark Knight (2008), Director: Christopher Nolan, Stars: Christian Bale, Heath Ledger"<<endl<<endl;    
    } 
	else if (query == "Terminator 2: Judgment Day") 
	{
	
	    cout<<"Found: Terminator 2: Judgment Day (1991), Director: James Cameron, Stars: Arnold Schwarzenegger, Linda Hamilton"<<endl<<endl;
    }
	 else if (query == "John Wick") 
	{
        cout<<"Found: John Wick (2014), Director: Chad Stahelski, Stars: Keanu Reeves"<<endl<<endl;
    }

    // Romantic Movies
    else if (query == "The Notebook") 
	{
        cout<<"Found: The Notebook (2004), Director: Nick Cassavetes, Stars: Ryan Gosling, Rachel McAdams"<<endl<<endl;
    }
	 else if (query == "Titanic") 
	{
        cout<<"Found: Titanic (1997), Director: James Cameron, Stars: Leonardo DiCaprio, Kate Winslet"<<endl<<endl;
    }

    // Family Movies
    else if (query == "The Lion King") 
	{
        cout<<"Found: The Lion King (1994), Genre: Family"<<endl<<endl;
    }
    
	 else if (query == "Toy Story") 
	{
        cout<<"Found: Toy Story (1995), Genre: Family"<<endl<<endl;
    }

    // Comedy Movies
    else if (query == "The Hangover") 
	{
        cout<<"Found: The Hangover (2009), Genre: Comedy"<<endl<<endl;
    }
    
	 else if (query == "Superbad") 
	{
        cout<<"Found: Superbad (2007), Genre: Comedy"<<endl<<endl;
    }

    // Sci-fi Movies
    else if (query == "Interstellar") 
	{
        cout<<"Found: Interstellar (2014), Director: Christopher Nolan"<<endl<<endl;
    }
    
	 else if (query == "Blade Runner 2049") 
	{
        cout<<"Found: Blade Runner 2049 (2017), Genre: Sci-fi"<<endl<<endl;
    }

    // R-Rated Movies
    else if (query == "The Wolf of Wall Street") 
	{
        cout<<"Found: The Wolf of Wall Street (2013), Director: Martin Scorsese"<<endl<<endl;
    }
    
	 else if (query == "Pulp Fiction") 
	{
        cout<<"Found: Pulp Fiction (1994), Director: Quentin Tarantino"<<endl<<endl;
    }
    

    // Movies with Ratings
    else if (query == "The Shawshank Redemption") 
	{
        cout<<"Found: The Shawshank Redemption (1994), Rating: 9.3"<<endl<<endl;
    
	}
	
	 else if (query == "Inception") 
	{
        cout<<"Found: Inception (2010), Rating: 8.8"<<endl<<endl;
    }

    // No match found
    else {
          cout<<"No matches found for your search!!."<<endl<<endl;
        }

    cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
	
}

void Mood(string mood)
{
	    if (mood == "happy") 
		{
            cout<<"Recommended Comedy Movies:\n 1.The Hangover\n 2.Superbad\n 3.Step Brothers\n 4.Bridesmaids\n 5.Groundhog Day"<<endl<<endl;
        }
	     else if (mood == "adventurous") 
    	{
          cout<<"Recommended Action Movies:\n 1.Mad Max: Fury Road\n 2.The Dark Knight\n 3.John Wick\n 4.Gladiator\n 5.The Avengers"<<endl<<endl;
        }
	     else if (mood == "romantic") 
	    {
         cout<<"Recommended Romantic Movies:\n 1.The Notebook\n 2.Titanic\n 2.Pride & Prejudice\n 3.La La Land\n  4.Casablanca"<<endl<<endl;
        }
	     else if (mood == "family") 
	    {
          cout<<"Recommended Family Movies:\n 1.The Lion King\n 2.Toy Story\n 3.Finding Nemo\n 4.Harry Potter and the Sorcerer�s Stone\n 5.Frozen"<<endl<<endl;
        }
	    else if (mood == "sci-fi") 
	    {
          cout<<"Recommended Sci-Fi Movies:\n 1.Interstellar\n 2.Blade Runner 2049\n 3.Inception\n 4.The Matrix\n 5.Guardians of the Galaxy"<<endl<<endl;
        }
	    else if (mood == "r-rated") 
	    {
          cout<<"Recommended R-Rated Movies:\n 1.The Wolf of Wall Street\n 2.Pulp Fiction\n 3.Fight Club\n 4.Deadpool\n 5.The Godfather"<<endl<<endl;
         }
	    else 
	   {
          cout<<"No specific recommendations available for this mood."<<endl<<endl;
       }
       cout<<"---------------------------------------------------------------------------------------------------------------------"<<endl<<endl;

	
	
}
