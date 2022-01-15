#ifndef UE4SS_SDK_W_Tutorial_Sprinting_HPP
#define UE4SS_SDK_W_Tutorial_Sprinting_HPP

class UW_Tutorial_Sprinting_C : UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    ABP_TutorialTriggerManager_C* Manager;

    void OnShown();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_Tutorial_Sprinting(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasCharacter_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
}

#endif
