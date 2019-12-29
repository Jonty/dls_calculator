float dl_table [51][11] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {3.6, 3.6, 3.6, 3.6, 3.6, 3.5, 3.5, 3.4, 3.2, 2.5, 0},
    {7.2, 7.1, 7.1, 7.0, 7.0, 6.8, 6.6, 6.2, 5.5, 3.7, 0},
    {10.6, 10.5, 10.4, 10.3, 10.2, 9.9, 9.5, 8.7, 7.2, 4.2, 0},
    {13.9, 13.8, 13.7, 13.5, 13.2, 12.7, 12.0, 10.7, 8.4, 4.5, 0},
    {17.2, 17.0, 16.8, 16.5, 16.1, 15.4, 14.3, 12.5, 9.4, 4.6, 0},
    {20.3, 20.1, 19.8, 19.4, 18.8, 17.8, 16.4, 13.9, 10.1, 4.6, 0},
    {23.4, 23.1, 22.7, 22.2, 21.4, 20.1, 18.2, 15.2, 10.5, 4.7, 0},
    {26.4, 26.0, 25.5, 24.8, 23.8, 22.3, 19.9, 16.2, 10.9, 4.7, 0},
    {29.3, 28.9, 28.2, 27.4, 26.1, 24.2, 21.4, 17.1, 11.2, 4.7, 0},
    {32.1, 31.6, 30.8, 29.8, 28.3, 26.1, 22.8, 17.9, 11.4, 4.7, 0},
    {34.9, 34.2, 33.4, 32.1, 30.4, 27.8, 24.0, 18.5, 11.5, 4.7, 0},
    {37.6, 36.8, 35.8, 34.3, 32.3, 29.4, 25.1, 19.0, 11.6, 4.7, 0},
    {40.2, 39.3, 38.1, 36.5, 34.2, 30.8, 26.1, 19.5, 11.7, 4.7, 0},
    {42.7, 41.7, 40.4, 38.5, 35.9, 32.2, 27.0, 19.9, 11.8, 4.7, 0},
    {45.2, 44.1, 42.6, 40.5, 37.6, 33.5, 27.8, 20.2, 11.8, 4.7, 0},
    {47.6, 46.3, 44.7, 42.3, 39.1, 34.7, 28.5, 20.5, 11.8, 4.7, 0},
    {49.9, 48.5, 46.7, 44.1, 40.6, 35.8, 29.2, 20.7, 11.9, 4.7, 0},
    {52.2, 50.7, 48.6, 45.9, 42.0, 36.8, 29.8, 20.9, 11.9, 4.7, 0},
    {54.4, 52.8, 50.5, 47.5, 43.4, 37.7, 30.3, 21.1, 11.9, 4.7, 0},
    {56.6, 54.8, 52.4, 49.1, 44.6, 38.6, 30.8, 21.2, 11.9, 4.7, 0},
    {58.7, 56.7, 54.1, 50.6, 45.8, 39.4, 31.2, 21.3, 11.9, 4.7, 0},
    {60.7, 58.6, 55.8, 52.0, 47.0, 40.2, 31.6, 21.4, 11.9, 4.7, 0},
    {62.7, 60.4, 57.4, 53.4, 48.0, 40.9, 32.0, 21.5, 11.9, 4.7, 0},
    {64.6, 62.2, 59.0, 54.7, 49.0, 41.6, 32.3, 21.6, 11.9, 4.7, 0},
    {66.5, 63.9, 60.5, 56.0, 50.0, 42.2, 32.6, 21.6, 11.9, 4.7, 0},
    {68.3, 65.6, 62.0, 57.2, 50.9, 42.8, 32.8, 21.7, 11.9, 4.7, 0},
    {70.1, 67.2, 63.4, 58.4, 51.8, 43.3, 33.0, 21.7, 11.9, 4.7, 0},
    {71.8, 68.8, 64.8, 59.5, 52.6, 43.8, 33.2, 21.8, 11.9, 4.7, 0},
    {73.5, 70.3, 66.1, 60.5, 53.4, 44.2, 33.4, 21.8, 11.9, 4.7, 0},
    {75.1, 71.8, 67.3, 61.6, 54.1, 44.7, 33.6, 21.8, 11.9, 4.7, 0},
    {76.7, 73.2, 68.6, 62.5, 54.8, 45.1, 33.7, 21.9, 11.9, 4.7, 0},
    {78.3, 74.6, 69.7, 63.5, 55.4, 45.4, 33.9, 21.9, 11.9, 4.7, 0},
    {79.8, 75.9, 70.9, 64.4, 56.0, 45.8, 34.0, 21.9, 11.9, 4.7, 0},
    {81.3, 77.2, 72.0, 65.2, 56.6, 46.1, 34.1, 21.9, 11.9, 4.7, 0},
    {82.7, 78.5, 73.0, 66.0, 57.2, 46.4, 34.2, 21.9, 11.9, 4.7, 0},
    {84.1, 79.7, 74.1, 66.8, 57.7, 46.6, 34.3, 21.9, 11.9, 4.7, 0},
    {85.4, 80.9, 75.0, 67.6, 58.2, 46.9, 34.4, 21.9, 11.9, 4.7, 0},
    {86.7, 82.0, 76.0, 68.3, 58.7, 47.1, 34.5, 21.9, 11.9, 4.7, 0},
    {88.0, 83.1, 76.9, 69.0, 59.1, 47.4, 34.5, 22.0, 11.9, 4.7, 0},
    {89.3, 84.2, 77.8, 69.6, 59.5, 47.6, 34.6, 22.0, 11.9, 4.7, 0},
    {90.5, 85.3, 78.7, 70.3, 59.9, 47.8, 34.6, 22.0, 11.9, 4.7, 0},
    {91.7, 86.3, 79.5, 70.9, 60.3, 47.9, 34.7, 22.0, 11.9, 4.7, 0},
    {92.8, 87.3, 80.3, 71.4, 60.7, 48.1, 34.7, 22.0, 11.9, 4.7, 0},
    {93.9, 88.2, 81.0, 72.0, 61.0, 48.3, 34.8, 22.0, 11.9, 4.7, 0},
    {95.0, 89.1, 81.8, 72.5, 61.3, 48.4, 34.8, 22.0, 11.9, 4.7, 0},
    {96.1, 90.0, 82.5, 73.0, 61.6, 48.5, 34.8, 22.0, 11.9, 4.7, 0},
    {97.1, 90.9, 83.2, 73.5, 61.9, 48.6, 34.9, 22.0, 11.9, 4.7, 0},
    {98.1, 91.7, 83.8, 74.0, 62.2, 48.8, 34.9, 22.0, 11.9, 4.7, 0},
    {99.1, 92.6, 84.5, 74.4, 62.5, 48.9, 34.9, 22.0, 11.9, 4.7, 0},
    {100.0, 93.4, 85.1, 74.9, 62.7, 49.0, 34.9, 22.0, 11.9, 4.7, 0}
};

int bowling_points[11] {0, 5, 4, 3, 2, 2, 1, 1, 0, 0, 0};

int total_overs = 50;

int runs_needed(int overs, int balls, int wickets, int target) {
  if (overs >= total_overs) {
    return target;
  }

  float x1 = target-target * dl_table[total_overs-overs][wickets] / 100;
  if (balls == 0) {return x1;}

  float x2 = target-target * dl_table[total_overs-overs-1][wickets] / 100;
  float x3 = x1 + (x2-x1) * balls / 6;

  return x3;
}

int points_a = 0;
int points_b = 0;

int calc(int run_a, int wkt_a, int run_b, int wkt_b, int overs, int max_over) {
    if (max_over > 50) {
      max_over = 50;
    }

    // FIXME: the update_values max stuff

    if (wkt_b > 10) {
      wkt_b = 10;
    }

    int overs_b = floor(overs);
    int balls_b = floor((overs - overs_b) * 10 + 0.5);
    if (balls_b > 5) 
    {
      balls_b -= 6; 
      overs_b ++;
    }

    int target_b = floor(runs_needed(overs_b, balls_b, wkt_b, run_a));
    String result_str;
    int margin;

    if (target_b < run_b) {
      // Team B wins
      margin = run_b - target_b;
      
      points_b = 10;

      int wkts_needed = 11;
      for (int i=0; i<=10; i++) {
        int new_target = floor(runs_needed(overs_b, balls_b, i, run_a));
        if (new_target >= run_b) {
          wkts_needed = i;
          break;
        }
      }
  
      int wkts_to_take = wkts_needed - wkt_b;
      points_a = bowling_points[wkts_to_take];
      
    } else if (target_b > run_b) {
      // Team A wins
      margin = target_b - run_b;

      points_a = 10;

      float percentage_of_score = (float)run_b / (float)target_b;
      if (percentage_of_score >= 0.5) {points_b = 1;}               
      if (percentage_of_score >= 0.6) {points_b = 2;}
      if (percentage_of_score >= 0.7) {points_b = 3;}
      if (percentage_of_score >= 0.8) {points_b = 4;}
      if (percentage_of_score >= 0.9) {points_b = 5;}
      
    } else if (target_b == run_b) {
      // Match is a tie      
      points_a = 7;
      points_b = 7;
    }
    
}

int run_a;
int wkt_a;
int run_b;
int wkt_b;
int overs;
int max_overs;

String state_strings [6] = {"run_a", "wkt_a", "run_b", "wkt_b", "overs", "max_overs"};

int state = 0;

String handle_state(int state, int number) {
  char buffer[20];
  switch (state) {
    case 0: // run_a
      run_a = number;
      return state_strings[state + 1];
      break;
    case 1: // wkt_a
      wkt_a = number;
      return state_strings[state + 1];
      break;
    case 2: // run_b
      run_b = number;
      return state_strings[state + 1];
      break;
    case 3: // wkt_b
      wkt_b = number;
      return state_strings[state + 1];
      break;
    case 4: // overs
      overs = number;
      return state_strings[state + 1];
      break;
    case 5: // max_overs
      max_overs = number;
      total_overs = max_overs; //FIXME, temp until the value adjust is implemented
      calc(run_a, wkt_a, run_b, wkt_b, overs, max_overs);
      return "results";
      break;
    case 6: // show team a points
      sprintf(buffer, "points a: %d", points_a);
      return buffer;
      break;
    case 7: // show team b points
      sprintf(buffer, "points b: %d", points_b);
      return buffer;
      break;
    case 8: // reset
      run_a = 0;
      wkt_a = 0;
      run_b = 0;
      wkt_b = 0;
      overs = 0;
      max_overs = 0;
      state = 0;
      return "reset";
      break;
  }
}

String input = "";

String process_input(char input_byte) {
  String output = "";
  
  // Buffer data input
  if ((input_byte >= '0') && (input_byte <= '9')) {
      input += input_byte;
      output = input;

  // Process inputted data and change state
  } else if (input_byte == '=') {
      output = handle_state(state, input.toInt()); //FIXME do .toInt()
      state += 1;
      input = "";
  }

  return output;
}

void setup() {
  Serial.begin(9600);
  Serial.println(state_strings[0]);
}

char rx_byte = 0;
void loop() {
  if (Serial.available() > 0) {
    rx_byte = Serial.read();
    Serial.println(process_input(rx_byte));
  }
}
