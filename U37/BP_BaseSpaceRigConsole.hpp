#ifndef UE4SS_SDK_BP_BaseSpaceRigConsole_HPP
#define UE4SS_SDK_BP_BaseSpaceRigConsole_HPP

class ABP_BaseSpaceRigConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UTextRenderComponent* TextRender;
    class UWidgetComponent* Widget;
    class UStaticMeshComponent* StaticMesh1;
    class UBoxComponent* Box;
    class UInstantUsable* InstantUsable;
    class USceneComponent* DefaultSceneRoot;
    TArray<class ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed;
    FString StatCountKey;
    FText ConsoleTitle;
    FText NotificationText;
    class UTexture2D* NotificationIcon;
    TSoftClassPtr<UWindowWidget> ConsoleWindowClass;
    int32 Window Z Order;
    bool CreateMenuOnStartup;
    class UWindowWidget* WindowInstance;

    void ShowNotification(bool IsVisible);
    void SetCreateMenuOnStartUp(bool InCreateOnStartUp);
    void IsNewPlayer(class ABP_PlayerController_SpaceRig_C* PlayerController, bool& IsNewPlayer);
    void UserConstructionScript();
    void OnOpenConsole(class ABP_PlayerController_SpaceRig_C* InPlayerController);
    void OnWindowCreated(class UWindowWidget* WindowWidget);
    void PIE_QuickUse();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BaseSpaceRigConsole(int32 EntryPoint);
};

#endif
