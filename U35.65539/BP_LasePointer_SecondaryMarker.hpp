#ifndef UE4SS_SDK_BP_LasePointer_SecondaryMarker_HPP
#define UE4SS_SDK_BP_LasePointer_SecondaryMarker_HPP

class ABP_LasePointer_SecondaryMarker_C : UBP_LaserPointer_Marker_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void UpdateMaterial();
    void ExecuteUbergraph_BP_LasePointer_SecondaryMarker(int32 EntryPoint);
}

#endif
