#ifndef UE4SS_SDK_W_Tutorial_MinersManualIntro_HPP
#define UE4SS_SDK_W_Tutorial_MinersManualIntro_HPP

class UW_Tutorial_MinersManualIntro_C : public UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Gold Mined;
    float GoldToMine;
    class ABP_TutorialTriggerManager_C* Manager;

    void OnShown();
    void UpdateText();
    void MessageReceived(FName TriggerName);
    void ExecuteUbergraph_W_Tutorial_MinersManualIntro(int32 EntryPoint, FExecuteUbergraph_W_Tutorial_MinersManualIntroK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasCharacter_ReturnValue, TArray<class ABP_TutorialTriggerManager_C*>& CallFunc_GetAllActorsOfClass_OutActors, FName K2Node_CustomEvent_TriggerName, class ABP_TutorialTriggerManager_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_NameName_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
};

#endif
