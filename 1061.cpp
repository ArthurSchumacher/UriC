#include <iostream>

using namespace std;

int main()
{

    string Trash;
    int InicialDay, FinalDay;
    int InicialHour, FinalHour;
    int InicialMinutes, FinalMinutes;
    int InicialSeconds, FinalSeconds;
    int DayResult, HourResult, MinuteResult, SecondsResult;
    int DurationInSeconds;

    cin >> Trash >> InicialDay;
    cin >> InicialHour >> Trash >> InicialMinutes >> Trash >> InicialSeconds;
    cin >> Trash >> FinalDay;
    cin >> FinalHour >> Trash >> FinalMinutes >> Trash >> FinalSeconds;

    DurationInSeconds = ((FinalDay * 86400 + FinalHour * 3600 + FinalMinutes * 60 + FinalSeconds) - (InicialDay * 86400 + InicialHour * 3600 + InicialMinutes * 60 + InicialSeconds));

    DayResult = DurationInSeconds / 86400;
    HourResult = (DurationInSeconds / 3600) % 24;
    MinuteResult = (DurationInSeconds / 60) % 60;
    SecondsResult = DurationInSeconds % 60;
    
    cout << DayResult << " dia(s)" << endl;
    cout << HourResult << " hora(s)" << endl;
    cout << MinuteResult << " minuto(s)" << endl;
    cout << SecondsResult << " segundo(s)" << endl;

    return 0;
}