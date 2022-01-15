#ifndef UE4SS_SDK_Tutorial_Hint_FocusShot_HPP
#define UE4SS_SDK_Tutorial_Hint_FocusShot_HPP

class UTutorial_Hint_FocusShot_C : UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float FirstTimeDelay;
    float AfterUseDelay;
    bool HasUsedFocus;
    float InitializeTime;

    void ReceiveOnInitialized();
    void OnItemEquipped_Event(AItem* Item);
    void FullyFocusedEvent_Event();
    void ExecuteUbergraph_Tutorial_Hint_FocusShot(int32 EntryPoint, bool Temp_bool_Variable, BoltActionWeaponFullyFocusedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, AItem* K2Node_CustomEvent_Item, UBoltActionWeapon* K2Node_DynamicCast_AsBolt_Action_Weapon, bool K2Node_DynamicCast_bSuccess, ItemDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasTutorialBeenShown_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float K2Node_Select_Default, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue);
}

#endif
