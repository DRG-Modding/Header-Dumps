#ifndef UE4SS_SDK_AIC_Spider_ExploderTank_HPP
#define UE4SS_SDK_AIC_Spider_ExploderTank_HPP

class AAIC_Spider_ExploderTank_C : UAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceivePossess(APawn* PossessedPawn);
    void TookDamage(float Amount);
    void ExecuteUbergraph_AIC_Spider_ExploderTank(int32 EntryPoint, DamageSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_Amount, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, APawn* CallFunc_K2_GetPawn_ReturnValue, UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, APawn* K2Node_Event_PossessedPawn, UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue);
}

#endif
