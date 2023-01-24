#ifndef UE4SS_SDK_HUD_RockCracker_Context_HPP
#define UE4SS_SDK_HUD_RockCracker_Context_HPP

class UHUD_RockCracker_Context_C : public UActorContextWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_AdvancedLabel_C* ContextLabel;
    class UProgressBar* HealthProgressBar;
    class UCanvasPanel* RootCanvas;
    class APlayerCharacter* Character;
    class AFuelLineSegment* FuelLineSegment;

    void UpdateWidget(class UPrimitiveComponent* InPrimitive);
    void ReceiveContextActorChanged(class AActor* InContextActor);
    void PreConstruct(bool IsDesignTime);
    void ReceiveUpdate(class UPrimitiveComponent* InContextPrimitive);
    void ReceiveShow(class UPrimitiveComponent* InContextPrimitive);
    void ExecuteUbergraph_HUD_RockCracker_Context(int32 EntryPoint);
};

#endif
