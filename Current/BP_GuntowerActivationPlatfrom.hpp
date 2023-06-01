#ifndef UE4SS_SDK_BP_GuntowerActivationPlatfrom_HPP
#define UE4SS_SDK_BP_GuntowerActivationPlatfrom_HPP

class ABP_GuntowerActivationPlatfrom_C : public AGuntowerActivationPlatform
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UAudioComponent* ProgressingSound;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UOutlineComponent* outline;
    class UWidgetComponent* ProgressScreen;
    class UPointLightComponent* PointLight;
    TArray<FColor> LightColors;
    class UMaterialInstanceDynamic* DynamicMaterial;
    int32 OldPlayerCount;

    void SetLightColor(FColor LightColor);
    void DisableLight();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void OnDisabledChanged(bool IsDisabled);
    void OnShutDown();
    void OnFinished();
    void PlayerSteppedOn(int32 CurrentCount);
    void PlayerSteppedOff(int32 CurrentCount);
    void ExecuteUbergraph_BP_GuntowerActivationPlatfrom(int32 EntryPoint);
};

#endif
