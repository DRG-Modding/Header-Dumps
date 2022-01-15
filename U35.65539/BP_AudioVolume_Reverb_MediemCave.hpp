#ifndef UE4SS_SDK_BP_AudioVolume_Reverb_MediemCave_HPP
#define UE4SS_SDK_BP_AudioVolume_Reverb_MediemCave_HPP

class ABP_AudioVolume_Reverb_MediemCave_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USphereComponent* Sphere;
    USceneComponent* DefaultSceneRoot;
    float Volume;
    float FadeTime;

    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ReceiveActorEndOverlap(AActor* OtherActor);
    void ExecuteUbergraph_BP_AudioVolume_Reverb_MediemCave(int32 EntryPoint, AActor* K2Node_Event_OtherActor_1, AActor* K2Node_Event_OtherActor, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1);
}

#endif
