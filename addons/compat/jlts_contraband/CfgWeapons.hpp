class CfgWeapons {
    class ItemCore;
    class InventoryItem_Base_F;
    class InventoryWeapon_Base_F;
    SIMPLE_PATCH_VANILLA(JLTS_scanner_police);
    SIMPLE_PATCH_VANILLA(JLTS_credits_10);
    SIMPLE_PATCH_VANILLA(JLTS_drugs_electrolit);
    SIMPLE_PATCH(JLTS_ids_gar_navy,ItemCore,InventoryItem_Base_F);
    SIMPLE_PATCH_VANILLA(JLTS_intel_holocron_jedi);
};