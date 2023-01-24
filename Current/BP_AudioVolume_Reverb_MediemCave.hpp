#ifndef UE4SS_SDK_BP_AudioVolume_Reverb_MediemCave_HPP
#define UE4SS_SDK_BP_AudioVolume_Reverb_MediemCave_HPP

class ABP_AudioVolume_Reverb_MediemCave_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class USceneComponent* DefaultSceneRoot;
    float Volume;
    float FadeTime;

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_AudioVolume_Reverb_MediemCave(int32 EntryPoint);
};

#endif
