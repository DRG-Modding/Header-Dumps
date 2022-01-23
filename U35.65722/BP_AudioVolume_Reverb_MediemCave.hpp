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
    void ExecuteUbergraph_BP_AudioVolume_Reverb_MediemCave(int32 EntryPoint, class AActor* K2Node_Event_OtherActor_1, class AActor* K2Node_Event_OtherActor, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1);
};

#endif
