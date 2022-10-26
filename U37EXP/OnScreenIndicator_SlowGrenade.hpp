#ifndef UE4SS_SDK_OnScreenIndicator_SlowGrenade_HPP
#define UE4SS_SDK_OnScreenIndicator_SlowGrenade_HPP

class UOnScreenIndicator_SlowGrenade_C : public UFSDInWorldWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_1;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_OnScreenIndicator_SlowGrenade(int32 EntryPoint);
};

#endif
