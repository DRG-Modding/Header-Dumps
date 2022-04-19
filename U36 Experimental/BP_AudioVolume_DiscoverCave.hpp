#ifndef UE4SS_SDK_BP_AudioVolume_DiscoverCave_HPP
#define UE4SS_SDK_BP_AudioVolume_DiscoverCave_HPP

class ABP_AudioVolume_DiscoverCave_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class USceneComponent* DefaultSceneRoot;
    float Volume;
    float FadeTime;
    TArray<class APlayerCharacter*> Players;

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_AudioVolume_DiscoverCave(int32 EntryPoint);
};

#endif
