#ifndef UE4SS_SDK_W_TutorialMineMorkite_HPP
#define UE4SS_SDK_W_TutorialMineMorkite_HPP

class UW_TutorialMineMorkite_C : UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Gold Mined;
    float GoldToMine;
    ABP_TutorialTriggerManager_C* Manager;

    void OnShown();
    void UpdateText();
    void MessageReceived(FName TriggerName);
    void CustomEvent_0();
    void ExecuteUbergraph_W_TutorialMineMorkite(int32 EntryPoint, MessageReceived__DelegateSignature K2Node_CreateDelegate_OutputDelegate, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasCharacter_ReturnValue, TArray<ABP_TutorialTriggerManager_C*>& CallFunc_GetAllActorsOfClass_OutActors, FName K2Node_CustomEvent_TriggerName, ABP_TutorialTriggerManager_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_NameName_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
}

#endif
