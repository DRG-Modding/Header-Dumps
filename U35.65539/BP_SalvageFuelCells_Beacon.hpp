#ifndef UE4SS_SDK_BP_SalvageFuelCells_Beacon_HPP
#define UE4SS_SDK_BP_SalvageFuelCells_Beacon_HPP

class ABP_SalvageFuelCells_Beacon_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UStaticMeshComponent* SM_Light032;
    UStaticMeshComponent* SM_Light031;
    UStaticMeshComponent* SM_Light02;
    UStaticMeshComponent* SM_Light03;
    UWidgetComponent* Widget;
    UWidgetComponent* Widget1;
    USceneComponent* Hologram;
    UPointLightComponent* PointLight;
    UStaticMeshComponent* StaticMeshComponent0;
    UStaticMeshComponent* StaticMeshComponent03;
    UStaticMeshComponent* StaticMeshComponent02;
    USceneComponent* GFX;
    USceneComponent* Scene;
    float Light_Animation_0_1_Anim_6890D32F4D56C12E56512AB0CF2EC95B;
    TEnumAsByte<ETimelineDirection::Type> Light_Animation__Direction_6890D32F4D56C12E56512AB0CF2EC95B;
    UTimelineComponent* Light Animation;
    float LightIntensity;
    FLinearColor LightColor;

    void UserConstructionScript(FLinearColor CallFunc_GetLightColor_ReturnValue);
    void Light Animation__FinishedFunc();
    void Light Animation__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SalvageFuelCells_Beacon(int32 EntryPoint, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, bool Temp_bool_Variable, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float K2Node_Select_Default, FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
}

#endif
