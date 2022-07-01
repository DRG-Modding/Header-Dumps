#ifndef UE4SS_SDK_HUD_PipelineContext_HPP
#define UE4SS_SDK_HUD_PipelineContext_HPP

class UHUD_PipelineContext_C : public UActorContextWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_AdvancedLabel_C* ContextLabel;
    class UProgressBar* HealthProgressBar;
    class UCanvasPanel* RootCanvas;
    class APipelineSegment* PipelineSegment;
    class APlayerCharacter* Character;

    void UpdateWidget(class UPrimitiveComponent* InPrimitive);
    void ReceiveContextActorChanged(class AActor* InContextActor);
    void PreConstruct(bool IsDesignTime);
    void ReceiveUpdate(class UPrimitiveComponent* InContextPrimitive);
    void ReceiveShow(class UPrimitiveComponent* InContextPrimitive);
    void ExecuteUbergraph_HUD_PipelineContext(int32 EntryPoint);
};

#endif
