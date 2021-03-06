#ifndef UE4SS_SDK_BP_ZipLineState_HPP
#define UE4SS_SDK_BP_ZipLineState_HPP

class UBP_ZipLineState_C : public UZipLineStateComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    FVector GetJumpVector(FVector LookVector, FVector CurrentVelocitybool Temp_bool_Variable, float Temp_float_Variable, bool CallFunc_GetSpeedBoostActivated_ReturnValue, float CallFunc_VSizeXY_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_FClamp_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, float K2Node_Select_Default, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue_1);
    void ReceiveSpeedBoostActivated();
    void ReceiveSpeedBoostDeactivated();
    void ExecuteUbergraph_BP_ZipLineState(int32 EntryPoint, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_3, FVector CallFunc_Add_VectorVector_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1);
};

#endif
