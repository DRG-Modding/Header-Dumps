#ifndef UE4SS_SDK_W_TutorialMineMorkite_HPP
#define UE4SS_SDK_W_TutorialMineMorkite_HPP

class UW_TutorialMineMorkite_C : public UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Gold Mined;
    float GoldToMine;
    class ABP_TutorialTriggerManager_C* Manager;

    void OnShown();
    void UpdateText();
    void MessageReceived(FName TriggerName);
    void CustomEvent_0();
    void ExecuteUbergraph_W_TutorialMineMorkite(int32 EntryPoint, FExecuteUbergraph_W_TutorialMineMorkiteK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_W_TutorialMineMorkiteK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasCharacter_ReturnValue, TArray<class ABP_TutorialTriggerManager_C*>& CallFunc_GetAllActorsOfClass_OutActors, FName K2Node_CustomEvent_TriggerName, class ABP_TutorialTriggerManager_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_NameName_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
};

#endif
