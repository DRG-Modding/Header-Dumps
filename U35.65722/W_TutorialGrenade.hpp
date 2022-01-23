#ifndef UE4SS_SDK_W_TutorialGrenade_HPP
#define UE4SS_SDK_W_TutorialGrenade_HPP

class UW_TutorialGrenade_C : public UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Gold Mined;
    float GoldToMine;

    void OnShown();
    void UpdateTaskText();
    void GrenadeThrown();
    void ExecuteUbergraph_W_TutorialGrenade(int32 EntryPoint, FExecuteUbergraph_W_TutorialGrenadeK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasCharacter_ReturnValue);
};

#endif
