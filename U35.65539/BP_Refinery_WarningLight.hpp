#ifndef UE4SS_SDK_BP_Refinery_WarningLight_HPP
#define UE4SS_SDK_BP_Refinery_WarningLight_HPP

class ABP_Refinery_WarningLight_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPointLightComponent* PointLight;
    UStaticMeshComponent* ST_Refinery_WarningLight;
    USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void OnRefineryStateChanged(ERefineryState InRefineryState);
    void ExecuteUbergraph_BP_Refinery_WarningLight(int32 EntryPoint, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool Temp_bool_Variable, bool CallFunc_GetPhotosensitiveMode_ReturnValue, UMaterialInterface* Temp_object_Variable, bool Temp_bool_Variable_1, UMaterialInterface* Temp_object_Variable_1, UMaterialInterface* Temp_object_Variable_2, UMaterialInterface* K2Node_Select_Default, AActor* CallFunc_GetParentActor_ReturnValue, ERefineryState K2Node_CustomEvent_InRefineryState, UFSDRefinery* K2Node_DynamicCast_AsFSDRefinery, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, UMaterialInterface* K2Node_Select_Default_1, RefineryStateDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
}

#endif
