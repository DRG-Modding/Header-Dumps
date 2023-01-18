#ifndef UE4SS_SDK_OnScreenIndicator_ActiveButton_HPP
#define UE4SS_SDK_OnScreenIndicator_ActiveButton_HPP

class UOnScreenIndicator_ActiveButton_C : public UFSDInWorldWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_Arrow;
    class UImage* Image_Icon;
    class UCanvasPanel* RootCanvas;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_OnScreenIndicator_ActiveButton(int32 EntryPoint);
};

#endif
