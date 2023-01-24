#ifndef UE4SS_SDK_UI_VanityEventSource_HPP
#define UE4SS_SDK_UI_VanityEventSource_HPP

class UUI_VanityEventSource_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* RootCanvas;
    class UBasic_Image_C* Source_Image;
    class UBasic_Label_C* Source_Label;
    float Height;
    FVanityEventSource SourceData;

    void FromVanityItem(class UVanityItem* InItem);
    void SetSourceData(FVanityEventSource InData);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_VanityEventSource(int32 EntryPoint);
};

#endif
