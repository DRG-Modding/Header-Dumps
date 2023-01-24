#ifndef UE4SS_SDK_ITM_BarGlass_Item_Oktoberfest_HPP
#define UE4SS_SDK_ITM_BarGlass_Item_Oktoberfest_HPP

class AITM_BarGlass_Item_Oktoberfest_C : public AITM_BarGlass_Item_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnEmpty();
    void All_Drink();
    void SkinThrownGlass();
    void ExecuteUbergraph_ITM_BarGlass_Item_Oktoberfest(int32 EntryPoint);
};

#endif
