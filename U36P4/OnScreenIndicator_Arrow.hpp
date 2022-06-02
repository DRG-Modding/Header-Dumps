#ifndef UE4SS_SDK_OnScreenIndicator_Arrow_HPP
#define UE4SS_SDK_OnScreenIndicator_Arrow_HPP

class UOnScreenIndicator_Arrow_C : public UFSDInWorldWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_Arrow;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_OnScreenIndicator_Arrow(int32 EntryPoint);
};

#endif
