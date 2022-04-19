#ifndef UE4SS_SDK_BP_CabinOwnerSign_HPP
#define UE4SS_SDK_BP_CabinOwnerSign_HPP

class ABP_CabinOwnerSign_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* StaticMesh2;
    class UWidgetComponent* NameWidget;
    class UStaticMeshComponent* Lamp;
    class USceneComponent* DefaultSceneRoot;

    void SetPlayerName(FText& Value);
    void UserConstructionScript();
    void SetCabinOwner(class AFSDPlayerState* PlayerState);
    void ChangeName(FString NewName);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CabinOwnerSign(int32 EntryPoint);
};

#endif
