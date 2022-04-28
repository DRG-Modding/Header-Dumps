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

    void UserConstructionScript();
    void Light Animation__FinishedFunc();
    void Light Animation__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SalvageFuelCells_Beacon(int32 EntryPoint);
};

#endif
