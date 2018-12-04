//gameGenre.h
//Genres: Action, Adventure, Role Playing, Shooter, Simulation, Strategy, Sports 
//got from https://en.wikipedia.org/wiki/List_of_video_game_genres

#include "Game.h"

class Genre : public Game {
	private:
		//the user will add the name of the game to the pointer of these strings
		string actions;
		string adventures;
		string input;
		string role_plays;
		string FPS;
		string sims;
		string strats;
		string sports;
	public:
		void setAction(string action) { actions = action; }
		void setAdventure(string adventure) {adventures = adventure; }
		void setRP(string rp) {role_plays = rp; }
		void setFPS(string fps) {FPS = fps; }
		void setSim(string sim) {sims = sim; }	
		void setStrat(string strat) {strats = strat; }
		void setSport(string sport) {sports = sport; }
		/*void setAll(string action, string adventure, string rp, string fps, string sim, string strats, string sport) {
			setAction(action), setAdventure(adventure), setRP(rp), setFPS(fps), setSim(sim), setStrat(strat), setSport(sport);		
		}*/
		string getAction() const {return actions; }
		string getAdventure() const {return adventures; }
		string getRP() const {return role_plays; }
		string getFPS() const {return FPS; }
		string getSim() const {return sims; }
		string getStrat() const {return strats; }
		string getSport() const {return sports; }
		string print() const;
		
};

string ChooseGenre::print() const { cout << "Action game: " <<getAction()
							 << "\nadventure game: " << getAdventure()
							 << "\nRP game: " << getRP()
							 << "\nFPS game: " << getFPS()
							 <<"\nSimulation game: "<< getSim()
							 <<"\nStratergy game: "<< getStrat()
							 <<"\nSports game: "<< getSport()<<endl;}
