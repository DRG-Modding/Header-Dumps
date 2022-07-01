#ifndef UE4SS_SDK_BP_DiscordConsole_HPP
#define UE4SS_SDK_BP_DiscordConsole_HPP

class ABP_DiscordConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Cube1;
    class UBP_DiscordInstantUsable_C* BP_DiscordInstantUsable;
    class UBoxComponent* ProxmityTrigger;
    class UWidgetComponent* PSA;
    class UBoxComponent* Box;
    class UWidgetComponent* Widget;
    class USceneComponent* DefaultSceneRoot;
    float LastUpdate;
    bool IsUserIn;
    int32 OverlapCount;
    class UConsole_DiscordScreen_C* DiscordConsole;
    class ABP_PlayerController_SpaceRig_C* Player;

    void ValidGetPlayer(class ABP_PlayerController_SpaceRig_C*& Player);
    void SetUsable(bool Usable);
    void Answer(bool Yes);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void UserIn(bool isInServer);
    void BndEvt__ProxmityTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__ProxmityTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void RefreshUsable();
    void OnUsedClient(class ABP_PlayerControllerBase_C* User);
    void callRefreshUsable();
    void BndEvt__BP_DiscordInstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_DiscordConsole(int32 EntryPoint);
};

#endif
