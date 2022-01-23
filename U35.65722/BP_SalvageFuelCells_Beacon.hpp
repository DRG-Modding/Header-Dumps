#ifndef UE4SS_SDK_BP_SalvageFuelCells_Beacon_HPP
#define UE4SS_SDK_BP_SalvageFuelCells_Beacon_HPP

class ABP_SalvageFuelCells_Beacon_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UStaticMeshComponent* SM_Light032;
    class UStaticMeshComponent* SM_Light031;
    class UStaticMeshComponent* SM_Light02;
    class UStaticMeshComponent* SM_Light03;
    class UWidgetComponent* Widget;
    class UWidgetComponent* Widget1;
    class USceneComponent* Hologram;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* StaticMeshComponent0;
    class UStaticMeshComponent* StaticMeshComponent03;
    class UStaticMeshComponent* StaticMeshComponent02;
    class USceneComponent* GFX;
    class USceneComponent* Scene;
    float Light_Animation_0_1_Anim_6890D32F4D56C12E56512AB0CF2EC95B;
    TEnumAsByte<ETimelineDirection::Type> Light_Animation__Direction_6890D32F4D56C12E56512AB0CF2EC95B;
    class UTimelineComponent* Light Animation;
    float LightIntensity;
    FLinearColor LightColor;

    void UserConstructionScript(FLinearColor CallFunc_GetLightColor_ReturnValue);
    void Light Animation__FinishedFunc();
    void Light Animation__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SalvageFuelCells_Beacon(int32 EntryPoint, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, bool Temp_bool_Variable, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float K2Node_Select_Default, FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
};

#endif
