#ifndef UE4SS_SDK_BP_Anniversary_HeliumTank_HPP
#define UE4SS_SDK_BP_Anniversary_HeliumTank_HPP

class ABP_Anniversary_HeliumTank_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UInstantUsable* InstantUsable;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* FrontPlane;
    class UStaticMeshComponent* SM_Screen_005;
    class UParticleSystemComponent* P_GasCanister_air_Mule1;
    class UStaticMeshComponent* SM_GasCanister;
    class USceneComponent* DefaultSceneRoot;
    class UCurveFloat* PitchCurve;
    TArray<FFPitchedCharacter> PitchedUsers;
    TArray<class APlayerCharacter*> Players;
    TArray<class APlayerCharacter*> LastPlayers;
    TArray<FFPitchedCharacter> ServerPitchedUsers;
    int32 FoundAt;

    void OnPosses(class APawn* Pawn);
    void OnRep_Players();
    void GetCleanedShouts(TArray<class UAudioComponent*>& Shouts, TArray<class UAudioComponent*>& OutShouts);
    void PlayerExsists(class APlayerCharacter* Player, int32& FoundAt);
    void AddShoutToPitch(class APlayerCharacter* User, class UAudioComponent* Shout);
    void OnRep_HasInhaled();
    void BndEvt__BP_HeliumTank_InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveTick(float DeltaSeconds);
    void AddShoutForPitch(class APlayerCharacter* Player, class UAudioComponent* audio);
    void ReceiveBeginPlay();
    void SubscribeToDelegate(class APlayerCharacter* Player);
    void Possesed(class APawn* Pawn);
    void PlayerJoined(class AFSDPlayerState* PlayerState);
    void All_PlayParticleFX();
    void ExecuteUbergraph_BP_Anniversary_HeliumTank(int32 EntryPoint);
};

#endif
