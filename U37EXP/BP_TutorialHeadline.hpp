#ifndef UE4SS_SDK_BP_TutorialHeadline_HPP
#define UE4SS_SDK_BP_TutorialHeadline_HPP

class ABP_TutorialHeadline_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_TutorialHeadline(int32 EntryPoint);
};

#endif
