#ifndef UE4SS_SDK_Sign_MemorialUnlock_HPP
#define UE4SS_SDK_Sign_MemorialUnlock_HPP

class ASign_MemorialUnlock_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget;
    class UTextRenderComponent* TEXT_Main;
    class UStaticMeshComponent* Cube;
    class USceneComponent* DefaultSceneRoot;
    FText Text;
    bool Single Line;
    FText Text2;
    float Text Size;
    FColor Text Color;
    bool Capitals;
    FVector2D BoxScale;
    bool Visible;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Sign_MemorialUnlock(int32 EntryPoint);
};

#endif
