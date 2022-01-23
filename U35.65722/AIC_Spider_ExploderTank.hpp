#ifndef UE4SS_SDK_AIC_Spider_ExploderTank_HPP
#define UE4SS_SDK_AIC_Spider_ExploderTank_HPP

class AAIC_Spider_ExploderTank_C : public AAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceivePossess(class APawn* PossessedPawn);
    void TookDamage(float Amount);
    void ExecuteUbergraph_AIC_Spider_ExploderTank(int32 EntryPoint, FExecuteUbergraph_AIC_Spider_ExploderTankK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_Amount, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* K2Node_Event_PossessedPawn, class UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue);
};

#endif
