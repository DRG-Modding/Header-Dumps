#ifndef UE4SS_SDK_TEST_SeasonMissionComplete_HPP
#define UE4SS_SDK_TEST_SeasonMissionComplete_HPP

class UTEST_SeasonMissionComplete_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    USCREEN_MissionComplete_Season_C* SCREEN_MissionComplete_Season;

    void Construct();
    void SeasonFlowEnd();
    void ExecuteUbergraph_TEST_SeasonMissionComplete(int32 EntryPoint, SeasonFlowFinished__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
}

#endif
