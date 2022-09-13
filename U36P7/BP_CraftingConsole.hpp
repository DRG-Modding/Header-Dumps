#ifndef UE4SS_SDK_BP_CraftingConsole_HPP
#define UE4SS_SDK_BP_CraftingConsole_HPP

class ABP_CraftingConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* SpotLight2;
    class UPointLightComponent* PointLight4;
    class UPointLightComponent* PointLight3;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class USpotLightComponent* SpotLight1;
    class UStaticMeshComponent* LightCone2;
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* LightCone1;
    class UWidgetComponent* Widget;
    class UWidgetComponent* Widget2;
    class UWidgetComponent* Widget1;
    class UStaticMeshComponent* StaticMesh;
    class UTextRenderComponent* TextRender;
    class UBoxComponent* Box;
    class UInstantUsable* InstantUsable;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_0_NewTrack_0_26FA2F8A445C2278C5D1B8901F1A6686;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_26FA2F8A445C2278C5D1B8901F1A6686;
    class UTimelineComponent* Timeline_0;
    TArray<class ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed;

    void IsNewPlayer(class ABP_PlayerController_SpaceRig_C* PlayerController, bool& IsNewPlayer);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_CraftingConsole(int32 EntryPoint);
};

#endif
