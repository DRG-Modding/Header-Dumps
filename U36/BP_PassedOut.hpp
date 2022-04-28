#ifndef UE4SS_SDK_BP_PassedOut_HPP
#define UE4SS_SDK_BP_PassedOut_HPP

class UBP_PassedOut_C : public UPassedOutStateComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTransform Start Transform;
    bool WakeInBed;

    void AllPassedOut(bool& AllPassedOut);
    void ReceiveBeginPlay();
    void BeginFadeToBlack();
    void ReceiveStateEnter();
    void ReceiveStateExit();
    void Turn Off Juke Box();
    void Remove Drinking Mugs();
    void ReceiveTeamPassedOut();
    void ExecuteUbergraph_BP_PassedOut(int32 EntryPoint);
};

#endif
