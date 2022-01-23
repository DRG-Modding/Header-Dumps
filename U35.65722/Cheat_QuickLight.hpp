#ifndef UE4SS_SDK_Cheat_QuickLight_HPP
#define UE4SS_SDK_Cheat_QuickLight_HPP

class UCheat_QuickLight_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheckBox* IsInfiniteCheckbox;
    class USpinBox* Numoflightsspinbox;
    class USpinBox* RotZ;
    class UButton* SpawnLightbutton;

    void BndEvt__Button_67_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Spawn Lights(class APlayerCharacter* Owning character);
    void ExecuteUbergraph_Cheat_QuickLight(int32 EntryPoint, UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, int32 Temp_int_Variable, TSubclassOf<class AProjectile> K2Node_ClassDynamicCast_AsProjectile, bool K2Node_ClassDynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerCharacter* K2Node_CustomEvent_Owning_character, FRotator CallFunc_GetBaseAimRotation_ReturnValue, float CallFunc_GetValue_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, float CallFunc_GetValue_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_IsChecked_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, class AProjectileBase* CallFunc_SpawnProjectile_ReturnValue, float CallFunc_GetValue_ReturnValue_2, class AFlareGunProjectile* K2Node_DynamicCast_AsFlare_Gun_Projectile, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
};

#endif
