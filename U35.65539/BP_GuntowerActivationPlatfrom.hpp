#ifndef UE4SS_SDK_BP_GuntowerActivationPlatfrom_HPP
#define UE4SS_SDK_BP_GuntowerActivationPlatfrom_HPP

class ABP_GuntowerActivationPlatfrom_C : AGuntowerActivationPlatform
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPathfinderCollisionComponent* PathfinderCollision;
    UStaticMeshComponent* Cylinder;
    UAudioComponent* GunTowerUICount_Cue;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UOutlineComponent* outline;
    UWidgetComponent* ProgressScreen;
    UPointLightComponent* PointLight;
    TArray<FColor> LightColors;
    UMaterialInstanceDynamic* DynamicMaterial;

    void SetLightColor(FColor LightColor, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue);
    void DisableLight();
    void UserConstructionScript(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void ReceiveBeginPlay();
    void OnDisabledChanged(bool IsDisabled);
    void OnPlayersInsideChanged(int32 PlayersInside);
    void OnShutDown();
    void OnFinished();
    void ExecuteUbergraph_BP_GuntowerActivationPlatfrom(int32 EntryPoint, bool K2Node_Event_isDisabled, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_Event_playersInside, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue_1, FColor K2Node_Select_Default, bool Temp_bool_Variable_1, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue, FColor K2Node_Select_Default_1, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue_1, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UUI_GuntowerProgressBar_C* K2Node_DynamicCast_AsUI_Guntower_Progress_Bar, bool K2Node_DynamicCast_bSuccess, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, UUI_GuntowerProgressBar_C* K2Node_DynamicCast_AsUI_Guntower_Progress_Bar_1, bool K2Node_DynamicCast_bSuccess_1);
}

#endif
