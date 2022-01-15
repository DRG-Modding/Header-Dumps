#ifndef UE4SS_SDK_W_TutorialFlare_HPP
#define UE4SS_SDK_W_TutorialFlare_HPP

class UW_TutorialFlare_C : UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 FlaresCast;
    int32 NumberToCast;

    void OnShown();
    void OnFlareThrown();
    void UpdateText();
    void ExecuteUbergraph_W_TutorialFlare(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, OnFlareThrown__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_HasCharacter_ReturnValue, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
}

#endif
