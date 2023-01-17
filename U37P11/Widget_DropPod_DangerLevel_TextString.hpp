#ifndef UE4SS_SDK_Widget_DropPod_DangerLevel_TextString_HPP
#define UE4SS_SDK_Widget_DropPod_DangerLevel_TextString_HPP

class UWidget_DropPod_DangerLevel_TextString_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DATA_PlanetaryRegionName;
    FText Text;

    void SetColor(FSlateColor InColorAndOpacity);
    void SetText(FText InText);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Widget_DropPod_DangerLevel_TextString(int32 EntryPoint);
};

#endif
