#ifndef UE4SS_SDK_BP_SupplyPod_Beacon_HPP
#define UE4SS_SDK_BP_SupplyPod_Beacon_HPP

class ABP_SupplyPod_Beacon_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh_Hologram3;
    class UStaticMeshComponent* Mesh_Hologram2;
    class UWidgetComponent* Widget1;
    class UStaticMeshComponent* Mesh_Hologram1;
    class UWidgetComponent* Widget;
    class URotatingSceneComponent* RotatingScene;
    class ULightStrobingComponent* LightStrobing;
    class USphereComponent* FindCollision;
    class UPointLightComponent* PointLight;
    class USkeletalMeshComponent* Mesh_Beacon;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USceneComponent* Scene;
    float LightIntensity;
    FLinearColor LightColor;
    float TimeToLive;

    void SetBlinkIntensity(float BlinkIntensity);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SupplyPod_Beacon(int32 EntryPoint);
};

#endif
