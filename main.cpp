#include <iostream>

std::string question = "What will you do?";
std::string beginning = "The year is 12,067 GE. The Galactic Empire is crumbling, and chaos threatens the galaxy. As a member of the Psychohistorical Society on Terminus, you must guide humanity through the collapse. As captain of the SS Odyssey, your decisions will shape the future.";
std::string ending1 = "After decoding Dr. Seldon's message, you uncover a hidden plan to establish a Second Foundation, a secret organization dedicated to preserving knowledge and guiding humanity. The message reveals the location and purpose of the Second Foundation, ensuring that even in the darkest times, there is hope for a brighter future. Your discovery is hailed as a monumental achievement, and you are celebrated as a hero who has safeguarded the legacy of Dr. Seldon and the future of the galaxy.";
std::string ending2 = "Inside the ancient vault, you discover advanced technology from a bygone era. This technology proves to be the key to repelling the invaders threatening Terminus. With the newfound power, you lead a successful defense, driving the enemy forces away and securing the safety of the planet. The citizens of Terminus rejoice, and you are honored for your bravery and ingenuity. The advanced technology not only saves Terminus but also paves the way for a new era of scientific progress and exploration.";
std::string ending3 = "Through your diplomatic efforts, you form a strong alliance with the neighboring star system. Together, you and your new allies work to rebuild and strengthen the remnants of the Galactic Empire. This cooperation leads to a new era of peace and prosperity, as the combined forces of Terminus and the neighboring system create a stable and thriving society. Your leadership and vision are recognized as the cornerstone of this new alliance, and you are celebrated as a visionary who brought hope and unity to a fractured galaxy.";
std::string choices_1 = "1. investigate the communication blackout \n2. Focus on strengthening the defenses of Terminus.";
std::string branch_1 = "A sudden communication blackout with the core worlds has occurred. The once-bustling communication channels are now eerily silent. You must decide how to respond to this crisis";
std::string branch1_1 = "You decide to investigate the sudden communication blackout. Your ship approaches the damaged relay station, where you notice signs of a recent battle. Sensors pick up faint distress signals from a nearby escape pod.";
std::string choices_2 = "1. Rescue the survivors from the escape pod. \n2. Search the relay station for clues.";
std::string branch1_2 = "Recognizing the potential threat to Terminus, you decide to focus on strengthening the planet's defenses. You mobilize your crew and the citizens of Terminus, fortifying key positions and preparing for any possible attack. As you oversee the preparations, a scout ship returns with alarming news: a fleet of unknown origin is heading towards Terminus. The clock is ticking, and you must make strategic decisions to ensure the safety of your people.";
std::string choices_3 = "1. Prepare for a direct confrontation with the incoming fleet \n2. Set up a defensive Paremeter and plan an ambush";
std::string branch_2 = "After investigating the communication blackout, you uncover clues that lead to deeper mysteries. There are hidden messages and ancient artifacts that could hold the key to humanity's survival. You must decide how to proceed with these discoveries.";
std::string branch_3 = "With the defenses of Terminus strengthened, you receive alarming news: a powerful warlord is threatening the planet. The threat is imminent, and you must act quickly to protect your people. Your next move will determine the fate of Terminus.";

int decide(std::string situation, std::string choices, int num_choices) {
    std::cout << situation << "\n";
    bool choice_made = false;
    int decision;
    while (!choice_made) {
        std::cout << question << "\n" << choices << "\n";
        std::cin >> decision;
        if ( decision  <= num_choices) {
            choice_made = true;
            return decision;
        } else {
            std::cout << "invalid answer, try again." << "\n";
        }
    }
};

int main() {
    std::cout << beginning << "\n";
    return 0;
};