<?xml version='1.0' encoding='UTF-8' standalone='yes' ?>
<tagfile>
  <compound kind="file">
    <name>data_structures.h</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/</path>
    <filename>data__structures_8h</filename>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <includes id="list_8h" name="list.h" local="yes" imported="no">list.h</includes>
    <includes id="queue_8h" name="queue.h" local="yes" imported="no">queue.h</includes>
    <includes id="stack_8h" name="stack.h" local="yes" imported="no">stack.h</includes>
    <includes id="min__pq_8h" name="min_pq.h" local="yes" imported="no">min_pq.h</includes>
    <includes id="max__pq_8h" name="max_pq.h" local="yes" imported="no">max_pq.h</includes>
    <includes id="bst_8h" name="bst.h" local="yes" imported="no">bst.h</includes>
    <includes id="rbt_8h" name="rbt.h" local="yes" imported="no">rbt.h</includes>
    <includes id="hashset_8h" name="hashset.h" local="yes" imported="no">hashset.h</includes>
    <includes id="hashmap_8h" name="hashmap.h" local="yes" imported="no">hashmap.h</includes>
    <includes id="types_8h" name="types.h" local="yes" imported="no">types.h</includes>
  </compound>
  <compound kind="file">
    <name>array.h</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/</path>
    <filename>array_8h</filename>
    <includes id="types_8h" name="types.h" local="yes" imported="no">types.h</includes>
    <includes id="queue_8h" name="queue.h" local="yes" imported="no">queue.h</includes>
    <includes id="utils_8h" name="utils.h" local="yes" imported="no">utils.h</includes>
    <class kind="struct">s_array</class>
    <member kind="define">
      <type>#define</type>
      <name>ARRAY_INIT_CAPACITY</name>
      <anchorfile>array_8h.html</anchorfile>
      <anchor>acb786ace1a7944080808d2368ccf3c9b</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>array_delete</name>
      <anchorfile>array_8h.html</anchorfile>
      <anchor>a715232a8b24029cbc48ae3a699aa16e1</anchor>
      <arglist>(t_array *array)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>array_get</name>
      <anchorfile>array_8h.html</anchorfile>
      <anchor>a918d21770580885a0546aed54cdcd1d6</anchor>
      <arglist>(const t_array *array, size_t index)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>array_set</name>
      <anchorfile>array_8h.html</anchorfile>
      <anchor>a2fb4fb218dc1974616258e9144343a2b</anchor>
      <arglist>(t_array *array, size_t index, const void *content)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>array_append</name>
      <anchorfile>array_8h.html</anchorfile>
      <anchor>ae04c4b37ed9da0ff13cceef0d557c238</anchor>
      <arglist>(t_array *array, const void *content)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>array_pop</name>
      <anchorfile>array_8h.html</anchorfile>
      <anchor>afee8ee5dbfa21f14dbaf5e6cf3dc1e11</anchor>
      <arglist>(t_array *array)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>array_swap</name>
      <anchorfile>array_8h.html</anchorfile>
      <anchor>a4566d12821f9ed61809ff170452a01fa</anchor>
      <arglist>(t_array *array, size_t ind1, size_t ind2)</arglist>
    </member>
    <member kind="function">
      <type>size_t</type>
      <name>array_size</name>
      <anchorfile>array_8h.html</anchorfile>
      <anchor>a8b430a69e82ace913c563e1ebd123912</anchor>
      <arglist>(const t_array *array)</arglist>
    </member>
    <member kind="function">
      <type>t_array *</type>
      <name>array_new</name>
      <anchorfile>array_8h.html</anchorfile>
      <anchor>a49ece70adae0f882f7813255f7b8e6ad</anchor>
      <arglist>(const t_type *type)</arglist>
    </member>
    <member kind="function">
      <type>t_array *</type>
      <name>array_zeros</name>
      <anchorfile>array_8h.html</anchorfile>
      <anchor>a093f413353143959bbaa65190960065d</anchor>
      <arglist>(const t_type *type, size_t size)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>array_remove</name>
      <anchorfile>array_8h.html</anchorfile>
      <anchor>a0fc30e27e32759e6c99f9f85b3673de6</anchor>
      <arglist>(t_array *array, size_t index)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>array_insert</name>
      <anchorfile>array_8h.html</anchorfile>
      <anchor>a066db6dc4a4027073e2cb427db890124</anchor>
      <arglist>(t_array *array, size_t index, const void *content)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>array_insertion_sort</name>
      <anchorfile>array_8h.html</anchorfile>
      <anchor>a395561bc3051ed95cdbc41e2e9ff30c1</anchor>
      <arglist>(t_array *array)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>array_merge_sort</name>
      <anchorfile>array_8h.html</anchorfile>
      <anchor>acdee31effdf1a013fae080677037e620</anchor>
      <arglist>(t_array *array)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>array_quick_sort</name>
      <anchorfile>array_8h.html</anchorfile>
      <anchor>afddc63a15ba47c157c60f2346da39565</anchor>
      <arglist>(t_array *array)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>array_sorted</name>
      <anchorfile>array_8h.html</anchorfile>
      <anchor>aed1fc215a1f3c19cc5637a9a1ffcf118</anchor>
      <arglist>(const t_array *array)</arglist>
    </member>
    <member kind="function">
      <type>t_array *</type>
      <name>array_copy</name>
      <anchorfile>array_8h.html</anchorfile>
      <anchor>ad37f3876dc11f6cd6429d4d9d9d15766</anchor>
      <arglist>(const t_array *array)</arglist>
    </member>
    <member kind="function">
      <type>t_queue *</type>
      <name>array_to_queue</name>
      <anchorfile>array_8h.html</anchorfile>
      <anchor>afc5ba2cd555b32533916e86026d846ee</anchor>
      <arglist>(const t_array *array)</arglist>
    </member>
    <member kind="function">
      <type>ssize_t</type>
      <name>array_indexof</name>
      <anchorfile>array_8h.html</anchorfile>
      <anchor>a37c9934001662c95755c43cfdac71df7</anchor>
      <arglist>(const t_array *array, const void *val)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>array_append.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/array/</path>
    <filename>array__append_8c</filename>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <includes id="array__utils_8h" name="array_utils.h" local="yes" imported="no">array_utils.h</includes>
    <member kind="function">
      <type>void</type>
      <name>array_append</name>
      <anchorfile>array__append_8c.html</anchorfile>
      <anchor>ae04c4b37ed9da0ff13cceef0d557c238</anchor>
      <arglist>(t_array *array, const void *content)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>array_copy.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/array/</path>
    <filename>array__copy_8c</filename>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <member kind="function">
      <type>t_array *</type>
      <name>array_copy</name>
      <anchorfile>array__copy_8c.html</anchorfile>
      <anchor>ad37f3876dc11f6cd6429d4d9d9d15766</anchor>
      <arglist>(const t_array *array)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>array_delete.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/array/</path>
    <filename>array__delete_8c</filename>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <member kind="function">
      <type>void</type>
      <name>array_delete</name>
      <anchorfile>array__delete_8c.html</anchorfile>
      <anchor>a715232a8b24029cbc48ae3a699aa16e1</anchor>
      <arglist>(t_array *array)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>array_get.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/array/</path>
    <filename>array__get_8c</filename>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>array_get</name>
      <anchorfile>array__get_8c.html</anchorfile>
      <anchor>a918d21770580885a0546aed54cdcd1d6</anchor>
      <arglist>(const t_array *array, size_t index)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>array_indexof.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/array/</path>
    <filename>array__indexof_8c</filename>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <member kind="function">
      <type>ssize_t</type>
      <name>array_indexof</name>
      <anchorfile>array__indexof_8c.html</anchorfile>
      <anchor>a37c9934001662c95755c43cfdac71df7</anchor>
      <arglist>(const t_array *array, const void *val)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>array_insert.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/array/</path>
    <filename>array__insert_8c</filename>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <includes id="array__utils_8h" name="array_utils.h" local="yes" imported="no">array_utils.h</includes>
    <member kind="function">
      <type>void</type>
      <name>array_insert</name>
      <anchorfile>array__insert_8c.html</anchorfile>
      <anchor>a066db6dc4a4027073e2cb427db890124</anchor>
      <arglist>(t_array *array, size_t index, const void *content)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>array_insertion_sort.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/array/</path>
    <filename>array__insertion__sort_8c</filename>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <member kind="function">
      <type>void</type>
      <name>array_insertion_sort</name>
      <anchorfile>array__insertion__sort_8c.html</anchorfile>
      <anchor>a395561bc3051ed95cdbc41e2e9ff30c1</anchor>
      <arglist>(t_array *array)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>array_merge_sort.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/array/</path>
    <filename>array__merge__sort_8c</filename>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <member kind="function">
      <type>void</type>
      <name>array_merge_sort</name>
      <anchorfile>array__merge__sort_8c.html</anchorfile>
      <anchor>acdee31effdf1a013fae080677037e620</anchor>
      <arglist>(t_array *array)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>array_new.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/array/</path>
    <filename>array__new_8c</filename>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <member kind="function">
      <type>t_array *</type>
      <name>array_new</name>
      <anchorfile>array__new_8c.html</anchorfile>
      <anchor>a49ece70adae0f882f7813255f7b8e6ad</anchor>
      <arglist>(const t_type *type)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>array_pop.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/array/</path>
    <filename>array__pop_8c</filename>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <includes id="array__utils_8h" name="array_utils.h" local="yes" imported="no">array_utils.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>array_pop</name>
      <anchorfile>array__pop_8c.html</anchorfile>
      <anchor>afee8ee5dbfa21f14dbaf5e6cf3dc1e11</anchor>
      <arglist>(t_array *array)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>array_quick_sort.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/array/</path>
    <filename>array__quick__sort_8c</filename>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <member kind="function">
      <type>void</type>
      <name>array_quick_sort</name>
      <anchorfile>array__quick__sort_8c.html</anchorfile>
      <anchor>afddc63a15ba47c157c60f2346da39565</anchor>
      <arglist>(t_array *array)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>array_remove.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/array/</path>
    <filename>array__remove_8c</filename>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <includes id="array__utils_8h" name="array_utils.h" local="yes" imported="no">array_utils.h</includes>
    <member kind="function">
      <type>void</type>
      <name>array_remove</name>
      <anchorfile>array__remove_8c.html</anchorfile>
      <anchor>a0fc30e27e32759e6c99f9f85b3673de6</anchor>
      <arglist>(t_array *array, size_t index)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>array_set.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/array/</path>
    <filename>array__set_8c</filename>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <member kind="function">
      <type>void</type>
      <name>array_set</name>
      <anchorfile>array__set_8c.html</anchorfile>
      <anchor>a2fb4fb218dc1974616258e9144343a2b</anchor>
      <arglist>(t_array *array, size_t index, const void *content)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>array_size.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/array/</path>
    <filename>array__size_8c</filename>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <member kind="function">
      <type>size_t</type>
      <name>array_size</name>
      <anchorfile>array__size_8c.html</anchorfile>
      <anchor>a8b430a69e82ace913c563e1ebd123912</anchor>
      <arglist>(const t_array *array)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>array_sorted.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/array/</path>
    <filename>array__sorted_8c</filename>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <member kind="function">
      <type>int</type>
      <name>array_sorted</name>
      <anchorfile>array__sorted_8c.html</anchorfile>
      <anchor>aed1fc215a1f3c19cc5637a9a1ffcf118</anchor>
      <arglist>(const t_array *array)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>array_swap.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/array/</path>
    <filename>array__swap_8c</filename>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <member kind="function">
      <type>void</type>
      <name>array_swap</name>
      <anchorfile>array__swap_8c.html</anchorfile>
      <anchor>a4566d12821f9ed61809ff170452a01fa</anchor>
      <arglist>(t_array *array, size_t ind1, size_t ind2)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>array_to_queue.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/array/</path>
    <filename>array__to__queue_8c</filename>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <member kind="function">
      <type>t_queue *</type>
      <name>array_to_queue</name>
      <anchorfile>array__to__queue_8c.html</anchorfile>
      <anchor>afc5ba2cd555b32533916e86026d846ee</anchor>
      <arglist>(const t_array *array)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>array_utils.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/array/</path>
    <filename>array__utils_8c</filename>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
  </compound>
  <compound kind="file">
    <name>array_utils.h</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/array/</path>
    <filename>array__utils_8h</filename>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
  </compound>
  <compound kind="file">
    <name>array_zeros.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/array/</path>
    <filename>array__zeros_8c</filename>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <member kind="function">
      <type>t_array *</type>
      <name>array_zeros</name>
      <anchorfile>array__zeros_8c.html</anchorfile>
      <anchor>a093f413353143959bbaa65190960065d</anchor>
      <arglist>(const t_type *type, size_t size)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>bst.h</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/</path>
    <filename>bst_8h</filename>
    <includes id="types_8h" name="types.h" local="yes" imported="no">types.h</includes>
    <includes id="utils_8h" name="utils.h" local="yes" imported="no">utils.h</includes>
    <class kind="struct">s_bst_node</class>
    <class kind="struct">s_bst</class>
    <member kind="function">
      <type>t_bst *</type>
      <name>bst_new</name>
      <anchorfile>bst_8h.html</anchorfile>
      <anchor>a4c59703b62cfc7333c784cd82db7fc10</anchor>
      <arglist>(const t_type *key_type, const t_type *val_type)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>bst_put</name>
      <anchorfile>bst_8h.html</anchorfile>
      <anchor>a7d8aa0ca4a02a1659b2fd92fec917874</anchor>
      <arglist>(t_bst *bst, const void *key, const void *val)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>bst_get</name>
      <anchorfile>bst_8h.html</anchorfile>
      <anchor>a1de59b3eaa8e1c25f65b358af5878a05</anchor>
      <arglist>(const t_bst *bst, const void *key)</arglist>
    </member>
    <member kind="function">
      <type>size_t</type>
      <name>bst_size</name>
      <anchorfile>bst_8h.html</anchorfile>
      <anchor>aeb213f45b63b78ca56bf44464eec2e07</anchor>
      <arglist>(const t_bst *bst)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>bst_delete</name>
      <anchorfile>bst_8h.html</anchorfile>
      <anchor>a288108717af545a907e0d1da55cf26c0</anchor>
      <arglist>(t_bst *bst)</arglist>
    </member>
    <member kind="function">
      <type>size_t</type>
      <name>bst_height</name>
      <anchorfile>bst_8h.html</anchorfile>
      <anchor>a9af493ba7ebcffede228f98dce3af711</anchor>
      <arglist>(const t_bst *bst)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>bst_delete.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/bst/</path>
    <filename>bst__delete_8c</filename>
    <includes id="bst_8h" name="bst.h" local="yes" imported="no">bst.h</includes>
    <member kind="function">
      <type>void</type>
      <name>bst_delete</name>
      <anchorfile>bst__delete_8c.html</anchorfile>
      <anchor>a288108717af545a907e0d1da55cf26c0</anchor>
      <arglist>(t_bst *bst)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>bst_get.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/bst/</path>
    <filename>bst__get_8c</filename>
    <includes id="bst_8h" name="bst.h" local="yes" imported="no">bst.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>bst_get</name>
      <anchorfile>bst__get_8c.html</anchorfile>
      <anchor>a1de59b3eaa8e1c25f65b358af5878a05</anchor>
      <arglist>(const t_bst *bst, const void *key)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>bst_height.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/bst/</path>
    <filename>bst__height_8c</filename>
    <includes id="bst_8h" name="bst.h" local="yes" imported="no">bst.h</includes>
    <member kind="function">
      <type>size_t</type>
      <name>bst_height</name>
      <anchorfile>bst__height_8c.html</anchorfile>
      <anchor>a9af493ba7ebcffede228f98dce3af711</anchor>
      <arglist>(const t_bst *bst)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>bst_new.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/bst/</path>
    <filename>bst__new_8c</filename>
    <includes id="bst_8h" name="bst.h" local="yes" imported="no">bst.h</includes>
    <member kind="function">
      <type>t_bst *</type>
      <name>bst_new</name>
      <anchorfile>bst__new_8c.html</anchorfile>
      <anchor>a4c59703b62cfc7333c784cd82db7fc10</anchor>
      <arglist>(const t_type *key_type, const t_type *val_type)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>bst_put.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/bst/</path>
    <filename>bst__put_8c</filename>
    <includes id="bst_8h" name="bst.h" local="yes" imported="no">bst.h</includes>
    <member kind="function">
      <type>void</type>
      <name>bst_put</name>
      <anchorfile>bst__put_8c.html</anchorfile>
      <anchor>a7d8aa0ca4a02a1659b2fd92fec917874</anchor>
      <arglist>(t_bst *bst, const void *key, const void *val)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>bst_size.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/bst/</path>
    <filename>bst__size_8c</filename>
    <includes id="bst_8h" name="bst.h" local="yes" imported="no">bst.h</includes>
    <member kind="function">
      <type>size_t</type>
      <name>bst_size</name>
      <anchorfile>bst__size_8c.html</anchorfile>
      <anchor>aeb213f45b63b78ca56bf44464eec2e07</anchor>
      <arglist>(const t_bst *bst)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>graph.h</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/</path>
    <filename>graph_8h</filename>
    <includes id="types_8h" name="types.h" local="yes" imported="no">types.h</includes>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <includes id="rbt_8h" name="rbt.h" local="yes" imported="no">rbt.h</includes>
    <includes id="utils_8h" name="utils.h" local="yes" imported="no">utils.h</includes>
    <class kind="struct">s_graph</class>
    <member kind="function">
      <type>t_graph *</type>
      <name>graph_new</name>
      <anchorfile>graph_8h.html</anchorfile>
      <anchor>ad0afc9231da0d7339c2823d73b2e667c</anchor>
      <arglist>(const t_type *type)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>graph_add_vertex</name>
      <anchorfile>graph_8h.html</anchorfile>
      <anchor>a99a604276e6e3834e21feb17c448967c</anchor>
      <arglist>(t_graph *graph, const void *v)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>graph_add_edge</name>
      <anchorfile>graph_8h.html</anchorfile>
      <anchor>a3d3ae0564f4f565ec6f986b8ef905bf5</anchor>
      <arglist>(t_graph *graph, const void *v1, const void *v2)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>graph_delete</name>
      <anchorfile>graph_8h.html</anchorfile>
      <anchor>a180920aa19fa4757a10e433101565aaa</anchor>
      <arglist>(t_graph *graph)</arglist>
    </member>
    <member kind="function">
      <type>t_queue *</type>
      <name>graph_vertices</name>
      <anchorfile>graph_8h.html</anchorfile>
      <anchor>acd37e2921e58604485a0c35336b701cc</anchor>
      <arglist>(const t_graph *graph)</arglist>
    </member>
    <member kind="function">
      <type>t_queue *</type>
      <name>graph_adjacency</name>
      <anchorfile>graph_8h.html</anchorfile>
      <anchor>a3decdf095e29fd5581d10c1ad89355d7</anchor>
      <arglist>(const t_graph *graph, const void *v)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>graph_adjacent</name>
      <anchorfile>graph_8h.html</anchorfile>
      <anchor>a21cac481d7ba7afebf531e22cad146a3</anchor>
      <arglist>(const t_graph *graph, const void *v1, const void *v2)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>graph_add_edge.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/graph/</path>
    <filename>graph__add__edge_8c</filename>
    <includes id="graph_8h" name="graph.h" local="yes" imported="no">graph.h</includes>
    <member kind="function">
      <type>void</type>
      <name>graph_add_edge</name>
      <anchorfile>graph__add__edge_8c.html</anchorfile>
      <anchor>a3d3ae0564f4f565ec6f986b8ef905bf5</anchor>
      <arglist>(t_graph *graph, const void *v1, const void *v2)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>graph_add_vertex.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/graph/</path>
    <filename>graph__add__vertex_8c</filename>
    <includes id="graph_8h" name="graph.h" local="yes" imported="no">graph.h</includes>
    <member kind="function">
      <type>void</type>
      <name>graph_add_vertex</name>
      <anchorfile>graph__add__vertex_8c.html</anchorfile>
      <anchor>a99a604276e6e3834e21feb17c448967c</anchor>
      <arglist>(t_graph *graph, const void *v)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>graph_adjacency.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/graph/</path>
    <filename>graph__adjacency_8c</filename>
    <includes id="graph_8h" name="graph.h" local="yes" imported="no">graph.h</includes>
    <member kind="function">
      <type>t_queue *</type>
      <name>graph_adjacency</name>
      <anchorfile>graph__adjacency_8c.html</anchorfile>
      <anchor>a3decdf095e29fd5581d10c1ad89355d7</anchor>
      <arglist>(const t_graph *graph, const void *v)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>graph_adjacent.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/graph/</path>
    <filename>graph__adjacent_8c</filename>
    <includes id="graph_8h" name="graph.h" local="yes" imported="no">graph.h</includes>
    <member kind="function">
      <type>int</type>
      <name>graph_adjacent</name>
      <anchorfile>graph__adjacent_8c.html</anchorfile>
      <anchor>a21cac481d7ba7afebf531e22cad146a3</anchor>
      <arglist>(const t_graph *graph, const void *v1, const void *v2)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>graph_delete.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/graph/</path>
    <filename>graph__delete_8c</filename>
    <includes id="graph_8h" name="graph.h" local="yes" imported="no">graph.h</includes>
    <member kind="function">
      <type>void</type>
      <name>graph_delete</name>
      <anchorfile>graph__delete_8c.html</anchorfile>
      <anchor>a180920aa19fa4757a10e433101565aaa</anchor>
      <arglist>(t_graph *graph)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>graph_new.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/graph/</path>
    <filename>graph__new_8c</filename>
    <includes id="graph_8h" name="graph.h" local="yes" imported="no">graph.h</includes>
    <member kind="function">
      <type>t_graph *</type>
      <name>graph_new</name>
      <anchorfile>graph__new_8c.html</anchorfile>
      <anchor>ad0afc9231da0d7339c2823d73b2e667c</anchor>
      <arglist>(const t_type *type)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>graph_vertices.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/graph/</path>
    <filename>graph__vertices_8c</filename>
    <includes id="graph_8h" name="graph.h" local="yes" imported="no">graph.h</includes>
    <member kind="function">
      <type>t_queue *</type>
      <name>graph_vertices</name>
      <anchorfile>graph__vertices_8c.html</anchorfile>
      <anchor>acd37e2921e58604485a0c35336b701cc</anchor>
      <arglist>(const t_graph *graph)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>hashmap.h</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/</path>
    <filename>hashmap_8h</filename>
    <includes id="types_8h" name="types.h" local="yes" imported="no">types.h</includes>
    <includes id="queue_8h" name="queue.h" local="yes" imported="no">queue.h</includes>
    <includes id="utils_8h" name="utils.h" local="yes" imported="no">utils.h</includes>
    <class kind="struct">s_hashmap</class>
    <member kind="define">
      <type>#define</type>
      <name>HASHMAP_INIT_CAPACITY</name>
      <anchorfile>hashmap_8h.html</anchorfile>
      <anchor>a0bef1d4bc115985aab272422ae09c81d</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>t_hashmap *</type>
      <name>hashmap_new</name>
      <anchorfile>hashmap_8h.html</anchorfile>
      <anchor>a2c5f2cd829e1eedeb0db022ac9e121fc</anchor>
      <arglist>(const t_type *key_type, const t_type *val_type)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>hashmap_put</name>
      <anchorfile>hashmap_8h.html</anchorfile>
      <anchor>a58e14a0f0011a02dbdd356340114c858</anchor>
      <arglist>(t_hashmap *hm, const void *key, const void *val)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>hashmap_get</name>
      <anchorfile>hashmap_8h.html</anchorfile>
      <anchor>a3bab882bc118c017160b2194d888f0dc</anchor>
      <arglist>(const t_hashmap *hm, const void *key)</arglist>
    </member>
    <member kind="function">
      <type>t_queue *</type>
      <name>hashmap_keys</name>
      <anchorfile>hashmap_8h.html</anchorfile>
      <anchor>af67d5aaac55d27a86f86cf1b319bcb55</anchor>
      <arglist>(const t_hashmap *hm)</arglist>
    </member>
    <member kind="function">
      <type>t_queue *</type>
      <name>hashmap_vals</name>
      <anchorfile>hashmap_8h.html</anchorfile>
      <anchor>a32e16ff8ec07d5d27e94175d2f5aeb1b</anchor>
      <arglist>(const t_hashmap *hm)</arglist>
    </member>
    <member kind="function">
      <type>size_t</type>
      <name>hashmap_size</name>
      <anchorfile>hashmap_8h.html</anchorfile>
      <anchor>a961150a70e28dfc28ddd090be23841a8</anchor>
      <arglist>(const t_hashmap *hm)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>hashmap_delete</name>
      <anchorfile>hashmap_8h.html</anchorfile>
      <anchor>a8c6a763fcf88dcf7413d63eb0caeeb7c</anchor>
      <arglist>(t_hashmap *hm)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>hashmap_remove</name>
      <anchorfile>hashmap_8h.html</anchorfile>
      <anchor>ad04647f6fba4454d8331386cc4fae290</anchor>
      <arglist>(t_hashmap *hm, const void *key)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>hashmap_contains</name>
      <anchorfile>hashmap_8h.html</anchorfile>
      <anchor>a4561f704e32e9c33bbf7e9142b0c301c</anchor>
      <arglist>(const t_hashmap *hm, const void *key)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>hashmap_contains.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/hashmap/</path>
    <filename>hashmap__contains_8c</filename>
    <includes id="hashmap_8h" name="hashmap.h" local="yes" imported="no">hashmap.h</includes>
    <member kind="function">
      <type>int</type>
      <name>hashmap_contains</name>
      <anchorfile>hashmap__contains_8c.html</anchorfile>
      <anchor>a4561f704e32e9c33bbf7e9142b0c301c</anchor>
      <arglist>(const t_hashmap *hm, const void *key)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>hashmap_delete.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/hashmap/</path>
    <filename>hashmap__delete_8c</filename>
    <includes id="hashmap_8h" name="hashmap.h" local="yes" imported="no">hashmap.h</includes>
    <member kind="function">
      <type>void</type>
      <name>hashmap_delete</name>
      <anchorfile>hashmap__delete_8c.html</anchorfile>
      <anchor>a8c6a763fcf88dcf7413d63eb0caeeb7c</anchor>
      <arglist>(t_hashmap *hm)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>hashmap_get.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/hashmap/</path>
    <filename>hashmap__get_8c</filename>
    <includes id="hashmap_8h" name="hashmap.h" local="yes" imported="no">hashmap.h</includes>
    <includes id="hashmap__utils_8h" name="hashmap_utils.h" local="yes" imported="no">hashmap_utils.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>hashmap_get</name>
      <anchorfile>hashmap__get_8c.html</anchorfile>
      <anchor>a3bab882bc118c017160b2194d888f0dc</anchor>
      <arglist>(const t_hashmap *hm, const void *key)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>hashmap_keys.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/hashmap/</path>
    <filename>hashmap__keys_8c</filename>
    <includes id="hashmap_8h" name="hashmap.h" local="yes" imported="no">hashmap.h</includes>
    <member kind="function">
      <type>t_queue *</type>
      <name>hashmap_keys</name>
      <anchorfile>hashmap__keys_8c.html</anchorfile>
      <anchor>af67d5aaac55d27a86f86cf1b319bcb55</anchor>
      <arglist>(const t_hashmap *hm)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>hashmap_new.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/hashmap/</path>
    <filename>hashmap__new_8c</filename>
    <includes id="hashmap_8h" name="hashmap.h" local="yes" imported="no">hashmap.h</includes>
    <member kind="function">
      <type>t_hashmap *</type>
      <name>hashmap_new</name>
      <anchorfile>hashmap__new_8c.html</anchorfile>
      <anchor>a2c5f2cd829e1eedeb0db022ac9e121fc</anchor>
      <arglist>(const t_type *key_type, const t_type *val_type)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>hashmap_put.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/hashmap/</path>
    <filename>hashmap__put_8c</filename>
    <includes id="hashmap_8h" name="hashmap.h" local="yes" imported="no">hashmap.h</includes>
    <includes id="hashmap__utils_8h" name="hashmap_utils.h" local="yes" imported="no">hashmap_utils.h</includes>
    <member kind="function">
      <type>void</type>
      <name>hashmap_put</name>
      <anchorfile>hashmap__put_8c.html</anchorfile>
      <anchor>a58e14a0f0011a02dbdd356340114c858</anchor>
      <arglist>(t_hashmap *hm, const void *key, const void *val)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>hashmap_remove.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/hashmap/</path>
    <filename>hashmap__remove_8c</filename>
    <includes id="hashmap_8h" name="hashmap.h" local="yes" imported="no">hashmap.h</includes>
    <includes id="hashmap__utils_8h" name="hashmap_utils.h" local="yes" imported="no">hashmap_utils.h</includes>
    <member kind="function">
      <type>void</type>
      <name>hashmap_remove</name>
      <anchorfile>hashmap__remove_8c.html</anchorfile>
      <anchor>ad04647f6fba4454d8331386cc4fae290</anchor>
      <arglist>(t_hashmap *hm, const void *key)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>hashmap_size.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/hashmap/</path>
    <filename>hashmap__size_8c</filename>
    <includes id="hashmap_8h" name="hashmap.h" local="yes" imported="no">hashmap.h</includes>
    <member kind="function">
      <type>size_t</type>
      <name>hashmap_size</name>
      <anchorfile>hashmap__size_8c.html</anchorfile>
      <anchor>a961150a70e28dfc28ddd090be23841a8</anchor>
      <arglist>(const t_hashmap *hm)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>hashmap_utils.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/hashmap/</path>
    <filename>hashmap__utils_8c</filename>
    <includes id="hashmap__utils_8h" name="hashmap_utils.h" local="yes" imported="no">hashmap_utils.h</includes>
  </compound>
  <compound kind="file">
    <name>hashmap_utils.h</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/hashmap/</path>
    <filename>hashmap__utils_8h</filename>
    <includes id="hashmap_8h" name="hashmap.h" local="yes" imported="no">hashmap.h</includes>
  </compound>
  <compound kind="file">
    <name>hashmap_vals.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/hashmap/</path>
    <filename>hashmap__vals_8c</filename>
    <includes id="hashmap_8h" name="hashmap.h" local="yes" imported="no">hashmap.h</includes>
    <member kind="function">
      <type>t_queue *</type>
      <name>hashmap_vals</name>
      <anchorfile>hashmap__vals_8c.html</anchorfile>
      <anchor>a32e16ff8ec07d5d27e94175d2f5aeb1b</anchor>
      <arglist>(const t_hashmap *hm)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>hashset.h</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/</path>
    <filename>hashset_8h</filename>
    <includes id="types_8h" name="types.h" local="yes" imported="no">types.h</includes>
    <includes id="queue_8h" name="queue.h" local="yes" imported="no">queue.h</includes>
    <includes id="utils_8h" name="utils.h" local="yes" imported="no">utils.h</includes>
    <class kind="struct">s_hashset</class>
    <member kind="define">
      <type>#define</type>
      <name>HASHSET_INIT_CAPACITY</name>
      <anchorfile>hashset_8h.html</anchorfile>
      <anchor>a18552e2297bb216f742106b8d489a0c2</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>t_hashset *</type>
      <name>hashset_new</name>
      <anchorfile>hashset_8h.html</anchorfile>
      <anchor>a03e5c3352d63bc2c6efd2127da48e9b3</anchor>
      <arglist>(const t_type *type)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>hashset_put</name>
      <anchorfile>hashset_8h.html</anchorfile>
      <anchor>a26b3cc015b593a0e9a74366f31f262fe</anchor>
      <arglist>(t_hashset *hs, const void *val)</arglist>
    </member>
    <member kind="function">
      <type>t_queue *</type>
      <name>hashset_vals</name>
      <anchorfile>hashset_8h.html</anchorfile>
      <anchor>a8ff8f619c981ce26728bf8616c7e82aa</anchor>
      <arglist>(const t_hashset *hs)</arglist>
    </member>
    <member kind="function">
      <type>size_t</type>
      <name>hashset_size</name>
      <anchorfile>hashset_8h.html</anchorfile>
      <anchor>a44b1a57c82a3802175efa9d01b0772fe</anchor>
      <arglist>(const t_hashset *hs)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>hashset_delete</name>
      <anchorfile>hashset_8h.html</anchorfile>
      <anchor>a8e551e76c77f92658c94ce24ea6cca54</anchor>
      <arglist>(t_hashset *hs)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>hashset_contains</name>
      <anchorfile>hashset_8h.html</anchorfile>
      <anchor>ae71dcd0fce40e3143b538c44559735eb</anchor>
      <arglist>(const t_hashset *hs, const void *val)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>hashset_remove</name>
      <anchorfile>hashset_8h.html</anchorfile>
      <anchor>a24b32bd4eaaaec5023e0199c30fb359e</anchor>
      <arglist>(t_hashset *hs, const void *val)</arglist>
    </member>
    <member kind="function">
      <type>t_hashset *</type>
      <name>hashset_copy</name>
      <anchorfile>hashset_8h.html</anchorfile>
      <anchor>ae8aa4932829f37990cef177678b6d734</anchor>
      <arglist>(const t_hashset *hs)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>hashset_contains.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/hashset/</path>
    <filename>hashset__contains_8c</filename>
    <includes id="hashset_8h" name="hashset.h" local="yes" imported="no">hashset.h</includes>
    <includes id="hashset__utils_8h" name="hashset_utils.h" local="yes" imported="no">hashset_utils.h</includes>
    <member kind="function">
      <type>int</type>
      <name>hashset_contains</name>
      <anchorfile>hashset__contains_8c.html</anchorfile>
      <anchor>ae71dcd0fce40e3143b538c44559735eb</anchor>
      <arglist>(const t_hashset *hs, const void *val)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>hashset_copy.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/hashset/</path>
    <filename>hashset__copy_8c</filename>
    <includes id="hashset_8h" name="hashset.h" local="yes" imported="no">hashset.h</includes>
    <member kind="function">
      <type>t_hashset *</type>
      <name>hashset_copy</name>
      <anchorfile>hashset__copy_8c.html</anchorfile>
      <anchor>ae8aa4932829f37990cef177678b6d734</anchor>
      <arglist>(const t_hashset *hs)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>hashset_delete.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/hashset/</path>
    <filename>hashset__delete_8c</filename>
    <includes id="hashset_8h" name="hashset.h" local="yes" imported="no">hashset.h</includes>
    <member kind="function">
      <type>void</type>
      <name>hashset_delete</name>
      <anchorfile>hashset__delete_8c.html</anchorfile>
      <anchor>a8e551e76c77f92658c94ce24ea6cca54</anchor>
      <arglist>(t_hashset *hs)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>hashset_new.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/hashset/</path>
    <filename>hashset__new_8c</filename>
    <includes id="hashset_8h" name="hashset.h" local="yes" imported="no">hashset.h</includes>
    <member kind="function">
      <type>t_hashset *</type>
      <name>hashset_new</name>
      <anchorfile>hashset__new_8c.html</anchorfile>
      <anchor>a03e5c3352d63bc2c6efd2127da48e9b3</anchor>
      <arglist>(const t_type *type)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>hashset_put.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/hashset/</path>
    <filename>hashset__put_8c</filename>
    <includes id="hashset_8h" name="hashset.h" local="yes" imported="no">hashset.h</includes>
    <includes id="hashset__utils_8h" name="hashset_utils.h" local="yes" imported="no">hashset_utils.h</includes>
    <member kind="function">
      <type>void</type>
      <name>hashset_put</name>
      <anchorfile>hashset__put_8c.html</anchorfile>
      <anchor>a26b3cc015b593a0e9a74366f31f262fe</anchor>
      <arglist>(t_hashset *hs, const void *val)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>hashset_remove.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/hashset/</path>
    <filename>hashset__remove_8c</filename>
    <includes id="hashset_8h" name="hashset.h" local="yes" imported="no">hashset.h</includes>
    <includes id="hashset__utils_8h" name="hashset_utils.h" local="yes" imported="no">hashset_utils.h</includes>
    <member kind="function">
      <type>void</type>
      <name>hashset_remove</name>
      <anchorfile>hashset__remove_8c.html</anchorfile>
      <anchor>a24b32bd4eaaaec5023e0199c30fb359e</anchor>
      <arglist>(t_hashset *hs, const void *val)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>hashset_size.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/hashset/</path>
    <filename>hashset__size_8c</filename>
    <includes id="hashset_8h" name="hashset.h" local="yes" imported="no">hashset.h</includes>
    <member kind="function">
      <type>size_t</type>
      <name>hashset_size</name>
      <anchorfile>hashset__size_8c.html</anchorfile>
      <anchor>a44b1a57c82a3802175efa9d01b0772fe</anchor>
      <arglist>(const t_hashset *hs)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>hashset_utils.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/hashset/</path>
    <filename>hashset__utils_8c</filename>
    <includes id="hashset__utils_8h" name="hashset_utils.h" local="yes" imported="no">hashset_utils.h</includes>
  </compound>
  <compound kind="file">
    <name>hashset_utils.h</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/hashset/</path>
    <filename>hashset__utils_8h</filename>
    <includes id="hashset_8h" name="hashset.h" local="yes" imported="no">hashset.h</includes>
  </compound>
  <compound kind="file">
    <name>hashset_vals.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/hashset/</path>
    <filename>hashset__vals_8c</filename>
    <includes id="hashset_8h" name="hashset.h" local="yes" imported="no">hashset.h</includes>
    <member kind="function">
      <type>t_queue *</type>
      <name>hashset_vals</name>
      <anchorfile>hashset__vals_8c.html</anchorfile>
      <anchor>a8ff8f619c981ce26728bf8616c7e82aa</anchor>
      <arglist>(const t_hashset *hs)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>list.h</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/</path>
    <filename>list_8h</filename>
    <includes id="types_8h" name="types.h" local="yes" imported="no">types.h</includes>
    <includes id="utils_8h" name="utils.h" local="yes" imported="no">utils.h</includes>
    <class kind="struct">s_link</class>
    <class kind="struct">s_list</class>
    <member kind="function">
      <type>void</type>
      <name>list_add_first</name>
      <anchorfile>list_8h.html</anchorfile>
      <anchor>a590064c33d7a9c0719bbc9cca3704988</anchor>
      <arglist>(t_list *alst, const void *data)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>list_add_last</name>
      <anchorfile>list_8h.html</anchorfile>
      <anchor>a311ce5b77a1f7dcb0265b88af0cf09b0</anchor>
      <arglist>(t_list *alst, const void *data)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>list_delete</name>
      <anchorfile>list_8h.html</anchorfile>
      <anchor>a728910dfeb7e568d2690601975f0022a</anchor>
      <arglist>(t_list *alst)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>list_unlink_first</name>
      <anchorfile>list_8h.html</anchorfile>
      <anchor>a5cf0a39e4fef5642c9dbb073f69e474f</anchor>
      <arglist>(t_list *alst)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>list_unlink_last</name>
      <anchorfile>list_8h.html</anchorfile>
      <anchor>ad2ce10f39d694857f82298fa327f0c60</anchor>
      <arglist>(t_list *alst)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>list_unlink</name>
      <anchorfile>list_8h.html</anchorfile>
      <anchor>aac9abc72bd5d8e32119e9b6491864be3</anchor>
      <arglist>(t_list *alst, size_t index)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>list_remove_first</name>
      <anchorfile>list_8h.html</anchorfile>
      <anchor>a9185a4ff4f960943b9df0df3a33fede0</anchor>
      <arglist>(t_list *alst)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>list_remove_last</name>
      <anchorfile>list_8h.html</anchorfile>
      <anchor>a21cbce426f16f1a1b9ae4d225fab656b</anchor>
      <arglist>(t_list *alst)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>list_remove</name>
      <anchorfile>list_8h.html</anchorfile>
      <anchor>a923422e1687794d0833562fa3a058a16</anchor>
      <arglist>(t_list *alst, size_t index)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>list_peek_first</name>
      <anchorfile>list_8h.html</anchorfile>
      <anchor>a01cb923f3ec39d57ced7e750494dd09d</anchor>
      <arglist>(const t_list *alst)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>list_peek_last</name>
      <anchorfile>list_8h.html</anchorfile>
      <anchor>a0694ae8b653d0f982d65c29daeaf0d73</anchor>
      <arglist>(const t_list *alst)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>list_peek</name>
      <anchorfile>list_8h.html</anchorfile>
      <anchor>adbdb871bc84a53c1acafa2eb7f04b5bf</anchor>
      <arglist>(const t_list *alst, size_t index)</arglist>
    </member>
    <member kind="function">
      <type>size_t</type>
      <name>list_size</name>
      <anchorfile>list_8h.html</anchorfile>
      <anchor>a42117518fcc54cfb6011bfe594962f43</anchor>
      <arglist>(const t_list *alst)</arglist>
    </member>
    <member kind="function">
      <type>t_list *</type>
      <name>list_new</name>
      <anchorfile>list_8h.html</anchorfile>
      <anchor>adf179029df36acabe0682519c1e8f913</anchor>
      <arglist>(const t_type *type)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>list_merge_sort</name>
      <anchorfile>list_8h.html</anchorfile>
      <anchor>a4d7955c48cdc32a8343061cacb5c7628</anchor>
      <arglist>(t_list *alst)</arglist>
    </member>
    <member kind="function">
      <type>t_list *</type>
      <name>list_copy</name>
      <anchorfile>list_8h.html</anchorfile>
      <anchor>a8b78db030df295c946fca502ded311cc</anchor>
      <arglist>(const t_list *alst)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>list_add_first.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/list/</path>
    <filename>list__add__first_8c</filename>
    <includes id="list_8h" name="list.h" local="yes" imported="no">list.h</includes>
    <member kind="function">
      <type>void</type>
      <name>list_add_first</name>
      <anchorfile>list__add__first_8c.html</anchorfile>
      <anchor>a590064c33d7a9c0719bbc9cca3704988</anchor>
      <arglist>(t_list *alst, const void *data)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>list_add_last.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/list/</path>
    <filename>list__add__last_8c</filename>
    <includes id="list_8h" name="list.h" local="yes" imported="no">list.h</includes>
    <member kind="function">
      <type>void</type>
      <name>list_add_last</name>
      <anchorfile>list__add__last_8c.html</anchorfile>
      <anchor>a311ce5b77a1f7dcb0265b88af0cf09b0</anchor>
      <arglist>(t_list *alst, const void *data)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>list_copy.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/list/</path>
    <filename>list__copy_8c</filename>
    <includes id="list_8h" name="list.h" local="yes" imported="no">list.h</includes>
    <member kind="function">
      <type>t_list *</type>
      <name>list_copy</name>
      <anchorfile>list__copy_8c.html</anchorfile>
      <anchor>a8b78db030df295c946fca502ded311cc</anchor>
      <arglist>(const t_list *alst)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>list_delete.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/list/</path>
    <filename>list__delete_8c</filename>
    <includes id="list_8h" name="list.h" local="yes" imported="no">list.h</includes>
    <member kind="function">
      <type>void</type>
      <name>list_delete</name>
      <anchorfile>list__delete_8c.html</anchorfile>
      <anchor>a728910dfeb7e568d2690601975f0022a</anchor>
      <arglist>(t_list *alst)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>list_merge_sort.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/list/</path>
    <filename>list__merge__sort_8c</filename>
    <includes id="list_8h" name="list.h" local="yes" imported="no">list.h</includes>
    <member kind="function">
      <type>void</type>
      <name>list_merge_sort</name>
      <anchorfile>list__merge__sort_8c.html</anchorfile>
      <anchor>a4d7955c48cdc32a8343061cacb5c7628</anchor>
      <arglist>(t_list *alst)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>list_new.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/list/</path>
    <filename>list__new_8c</filename>
    <includes id="list_8h" name="list.h" local="yes" imported="no">list.h</includes>
    <member kind="function">
      <type>t_list *</type>
      <name>list_new</name>
      <anchorfile>list__new_8c.html</anchorfile>
      <anchor>adf179029df36acabe0682519c1e8f913</anchor>
      <arglist>(const t_type *type)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>list_peek.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/list/</path>
    <filename>list__peek_8c</filename>
    <includes id="list_8h" name="list.h" local="yes" imported="no">list.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>list_peek</name>
      <anchorfile>list__peek_8c.html</anchorfile>
      <anchor>adbdb871bc84a53c1acafa2eb7f04b5bf</anchor>
      <arglist>(const t_list *alst, size_t index)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>list_peek_first.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/list/</path>
    <filename>list__peek__first_8c</filename>
    <includes id="list_8h" name="list.h" local="yes" imported="no">list.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>list_peek_first</name>
      <anchorfile>list__peek__first_8c.html</anchorfile>
      <anchor>a01cb923f3ec39d57ced7e750494dd09d</anchor>
      <arglist>(const t_list *alst)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>list_peek_last.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/list/</path>
    <filename>list__peek__last_8c</filename>
    <includes id="list_8h" name="list.h" local="yes" imported="no">list.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>list_peek_last</name>
      <anchorfile>list__peek__last_8c.html</anchorfile>
      <anchor>a0694ae8b653d0f982d65c29daeaf0d73</anchor>
      <arglist>(const t_list *alst)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>list_remove.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/list/</path>
    <filename>list__remove_8c</filename>
    <includes id="list_8h" name="list.h" local="yes" imported="no">list.h</includes>
    <member kind="function">
      <type>void</type>
      <name>list_remove</name>
      <anchorfile>list__remove_8c.html</anchorfile>
      <anchor>a923422e1687794d0833562fa3a058a16</anchor>
      <arglist>(t_list *alst, size_t index)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>list_remove_first.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/list/</path>
    <filename>list__remove__first_8c</filename>
    <includes id="list_8h" name="list.h" local="yes" imported="no">list.h</includes>
    <member kind="function">
      <type>void</type>
      <name>list_remove_first</name>
      <anchorfile>list__remove__first_8c.html</anchorfile>
      <anchor>a9185a4ff4f960943b9df0df3a33fede0</anchor>
      <arglist>(t_list *alst)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>list_remove_last.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/list/</path>
    <filename>list__remove__last_8c</filename>
    <includes id="list_8h" name="list.h" local="yes" imported="no">list.h</includes>
    <member kind="function">
      <type>void</type>
      <name>list_remove_last</name>
      <anchorfile>list__remove__last_8c.html</anchorfile>
      <anchor>a21cbce426f16f1a1b9ae4d225fab656b</anchor>
      <arglist>(t_list *alst)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>list_size.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/list/</path>
    <filename>list__size_8c</filename>
    <includes id="list_8h" name="list.h" local="yes" imported="no">list.h</includes>
    <member kind="function">
      <type>size_t</type>
      <name>list_size</name>
      <anchorfile>list__size_8c.html</anchorfile>
      <anchor>a42117518fcc54cfb6011bfe594962f43</anchor>
      <arglist>(const t_list *alst)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>list_unlink.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/list/</path>
    <filename>list__unlink_8c</filename>
    <includes id="list_8h" name="list.h" local="yes" imported="no">list.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>list_unlink</name>
      <anchorfile>list__unlink_8c.html</anchorfile>
      <anchor>aac9abc72bd5d8e32119e9b6491864be3</anchor>
      <arglist>(t_list *alst, size_t index)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>list_unlink_first.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/list/</path>
    <filename>list__unlink__first_8c</filename>
    <includes id="list_8h" name="list.h" local="yes" imported="no">list.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>list_unlink_first</name>
      <anchorfile>list__unlink__first_8c.html</anchorfile>
      <anchor>a5cf0a39e4fef5642c9dbb073f69e474f</anchor>
      <arglist>(t_list *alst)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>list_unlink_last.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/list/</path>
    <filename>list__unlink__last_8c</filename>
    <includes id="list_8h" name="list.h" local="yes" imported="no">list.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>list_unlink_last</name>
      <anchorfile>list__unlink__last_8c.html</anchorfile>
      <anchor>ad2ce10f39d694857f82298fa327f0c60</anchor>
      <arglist>(t_list *alst)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>max_pq.h</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/</path>
    <filename>max__pq_8h</filename>
    <includes id="types_8h" name="types.h" local="yes" imported="no">types.h</includes>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <includes id="utils_8h" name="utils.h" local="yes" imported="no">utils.h</includes>
    <member kind="typedef">
      <type>t_array</type>
      <name>t_max_pq</name>
      <anchorfile>max__pq_8h.html</anchorfile>
      <anchor>a559e4eeb984e8121568ac75cf0a3a854</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>t_max_pq *</type>
      <name>max_pq_new</name>
      <anchorfile>max__pq_8h.html</anchorfile>
      <anchor>a9203f84fc900cd561ef53e1bf1cbf358</anchor>
      <arglist>(const t_type *type)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>max_pq_peek</name>
      <anchorfile>max__pq_8h.html</anchorfile>
      <anchor>ad2c24d79ea0a2373883ef8bfe2c7327e</anchor>
      <arglist>(const t_max_pq *pq)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>max_pq_pop</name>
      <anchorfile>max__pq_8h.html</anchorfile>
      <anchor>a5c0d4cd96874a0cc7f62fb69d864d0e5</anchor>
      <arglist>(t_max_pq *pq)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>max_pq_add</name>
      <anchorfile>max__pq_8h.html</anchorfile>
      <anchor>aded0759d1a0dfea2b58eccac823ff6ac</anchor>
      <arglist>(t_max_pq *pq, const void *data)</arglist>
    </member>
    <member kind="function">
      <type>size_t</type>
      <name>max_pq_size</name>
      <anchorfile>max__pq_8h.html</anchorfile>
      <anchor>a276a09e8538255ae291dba4f79f827f4</anchor>
      <arglist>(const t_max_pq *pq)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>max_pq_delete</name>
      <anchorfile>max__pq_8h.html</anchorfile>
      <anchor>aca0eaf583fe79d89e02495279b5c66f9</anchor>
      <arglist>(t_max_pq *pq)</arglist>
    </member>
    <member kind="function">
      <type>t_max_pq *</type>
      <name>max_pq_copy</name>
      <anchorfile>max__pq_8h.html</anchorfile>
      <anchor>afd42222b039f8748a0744d71c5e7eeca</anchor>
      <arglist>(const t_max_pq *pq)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>max_pq_add.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/max_pq/</path>
    <filename>max__pq__add_8c</filename>
    <includes id="max__pq_8h" name="max_pq.h" local="yes" imported="no">max_pq.h</includes>
    <member kind="function">
      <type>void</type>
      <name>max_pq_add</name>
      <anchorfile>max__pq__add_8c.html</anchorfile>
      <anchor>aded0759d1a0dfea2b58eccac823ff6ac</anchor>
      <arglist>(t_max_pq *pq, const void *data)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>max_pq_copy.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/max_pq/</path>
    <filename>max__pq__copy_8c</filename>
    <includes id="max__pq_8h" name="max_pq.h" local="yes" imported="no">max_pq.h</includes>
    <member kind="function">
      <type>t_max_pq *</type>
      <name>max_pq_copy</name>
      <anchorfile>max__pq__copy_8c.html</anchorfile>
      <anchor>afd42222b039f8748a0744d71c5e7eeca</anchor>
      <arglist>(const t_max_pq *pq)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>max_pq_delete.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/max_pq/</path>
    <filename>max__pq__delete_8c</filename>
    <includes id="max__pq_8h" name="max_pq.h" local="yes" imported="no">max_pq.h</includes>
    <member kind="function">
      <type>void</type>
      <name>max_pq_delete</name>
      <anchorfile>max__pq__delete_8c.html</anchorfile>
      <anchor>aca0eaf583fe79d89e02495279b5c66f9</anchor>
      <arglist>(t_max_pq *pq)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>max_pq_new.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/max_pq/</path>
    <filename>max__pq__new_8c</filename>
    <includes id="max__pq_8h" name="max_pq.h" local="yes" imported="no">max_pq.h</includes>
    <member kind="function">
      <type>t_max_pq *</type>
      <name>max_pq_new</name>
      <anchorfile>max__pq__new_8c.html</anchorfile>
      <anchor>a9203f84fc900cd561ef53e1bf1cbf358</anchor>
      <arglist>(const t_type *type)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>max_pq_peek.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/max_pq/</path>
    <filename>max__pq__peek_8c</filename>
    <includes id="max__pq_8h" name="max_pq.h" local="yes" imported="no">max_pq.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>max_pq_peek</name>
      <anchorfile>max__pq__peek_8c.html</anchorfile>
      <anchor>ad2c24d79ea0a2373883ef8bfe2c7327e</anchor>
      <arglist>(const t_max_pq *pq)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>max_pq_pop.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/max_pq/</path>
    <filename>max__pq__pop_8c</filename>
    <includes id="max__pq_8h" name="max_pq.h" local="yes" imported="no">max_pq.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>max_pq_pop</name>
      <anchorfile>max__pq__pop_8c.html</anchorfile>
      <anchor>a5c0d4cd96874a0cc7f62fb69d864d0e5</anchor>
      <arglist>(t_max_pq *pq)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>max_pq_size.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/max_pq/</path>
    <filename>max__pq__size_8c</filename>
    <includes id="max__pq_8h" name="max_pq.h" local="yes" imported="no">max_pq.h</includes>
    <member kind="function">
      <type>size_t</type>
      <name>max_pq_size</name>
      <anchorfile>max__pq__size_8c.html</anchorfile>
      <anchor>a276a09e8538255ae291dba4f79f827f4</anchor>
      <arglist>(const t_max_pq *pq)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>min_pq.h</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/</path>
    <filename>min__pq_8h</filename>
    <includes id="types_8h" name="types.h" local="yes" imported="no">types.h</includes>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <includes id="utils_8h" name="utils.h" local="yes" imported="no">utils.h</includes>
    <member kind="typedef">
      <type>t_array</type>
      <name>t_min_pq</name>
      <anchorfile>min__pq_8h.html</anchorfile>
      <anchor>a1525eb391d11ddb24365ece0dae414be</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>t_min_pq *</type>
      <name>min_pq_new</name>
      <anchorfile>min__pq_8h.html</anchorfile>
      <anchor>a38c1ecabda5df95cba6430874d7cab20</anchor>
      <arglist>(const t_type *type)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>min_pq_peek</name>
      <anchorfile>min__pq_8h.html</anchorfile>
      <anchor>ab406d2fc692831e18a1a17f97a46df8c</anchor>
      <arglist>(const t_min_pq *pq)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>min_pq_pop</name>
      <anchorfile>min__pq_8h.html</anchorfile>
      <anchor>a40e1e6420eab3594797f98c94a030104</anchor>
      <arglist>(t_min_pq *pq)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>min_pq_add</name>
      <anchorfile>min__pq_8h.html</anchorfile>
      <anchor>a19ea9f068f1426e60d7ec6d9adc46797</anchor>
      <arglist>(t_min_pq *pq, const void *data)</arglist>
    </member>
    <member kind="function">
      <type>size_t</type>
      <name>min_pq_size</name>
      <anchorfile>min__pq_8h.html</anchorfile>
      <anchor>a85c74f30291d45fd12c959a335ce4519</anchor>
      <arglist>(const t_min_pq *pq)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>min_pq_delete</name>
      <anchorfile>min__pq_8h.html</anchorfile>
      <anchor>ad54851e44b5227b2db6e55cc65278664</anchor>
      <arglist>(t_min_pq *pq)</arglist>
    </member>
    <member kind="function">
      <type>t_min_pq *</type>
      <name>min_pq_copy</name>
      <anchorfile>min__pq_8h.html</anchorfile>
      <anchor>ae66723aad782960b792cc329390a0e96</anchor>
      <arglist>(const t_min_pq *pq)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>min_pq_add.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/min_pq/</path>
    <filename>min__pq__add_8c</filename>
    <includes id="min__pq_8h" name="min_pq.h" local="yes" imported="no">min_pq.h</includes>
    <member kind="function">
      <type>void</type>
      <name>min_pq_add</name>
      <anchorfile>min__pq__add_8c.html</anchorfile>
      <anchor>a19ea9f068f1426e60d7ec6d9adc46797</anchor>
      <arglist>(t_min_pq *pq, const void *data)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>min_pq_copy.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/min_pq/</path>
    <filename>min__pq__copy_8c</filename>
    <includes id="min__pq_8h" name="min_pq.h" local="yes" imported="no">min_pq.h</includes>
    <member kind="function">
      <type>t_min_pq *</type>
      <name>min_pq_copy</name>
      <anchorfile>min__pq__copy_8c.html</anchorfile>
      <anchor>ae66723aad782960b792cc329390a0e96</anchor>
      <arglist>(const t_min_pq *pq)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>min_pq_delete.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/min_pq/</path>
    <filename>min__pq__delete_8c</filename>
    <includes id="min__pq_8h" name="min_pq.h" local="yes" imported="no">min_pq.h</includes>
    <member kind="function">
      <type>void</type>
      <name>min_pq_delete</name>
      <anchorfile>min__pq__delete_8c.html</anchorfile>
      <anchor>ad54851e44b5227b2db6e55cc65278664</anchor>
      <arglist>(t_min_pq *pq)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>min_pq_new.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/min_pq/</path>
    <filename>min__pq__new_8c</filename>
    <includes id="min__pq_8h" name="min_pq.h" local="yes" imported="no">min_pq.h</includes>
    <member kind="function">
      <type>t_min_pq *</type>
      <name>min_pq_new</name>
      <anchorfile>min__pq__new_8c.html</anchorfile>
      <anchor>a38c1ecabda5df95cba6430874d7cab20</anchor>
      <arglist>(const t_type *type)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>min_pq_peek.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/min_pq/</path>
    <filename>min__pq__peek_8c</filename>
    <includes id="min__pq_8h" name="min_pq.h" local="yes" imported="no">min_pq.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>min_pq_peek</name>
      <anchorfile>min__pq__peek_8c.html</anchorfile>
      <anchor>ab406d2fc692831e18a1a17f97a46df8c</anchor>
      <arglist>(const t_min_pq *pq)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>min_pq_pop.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/min_pq/</path>
    <filename>min__pq__pop_8c</filename>
    <includes id="min__pq_8h" name="min_pq.h" local="yes" imported="no">min_pq.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>min_pq_pop</name>
      <anchorfile>min__pq__pop_8c.html</anchorfile>
      <anchor>a40e1e6420eab3594797f98c94a030104</anchor>
      <arglist>(t_min_pq *pq)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>min_pq_size.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/min_pq/</path>
    <filename>min__pq__size_8c</filename>
    <includes id="min__pq_8h" name="min_pq.h" local="yes" imported="no">min_pq.h</includes>
    <member kind="function">
      <type>size_t</type>
      <name>min_pq_size</name>
      <anchorfile>min__pq__size_8c.html</anchorfile>
      <anchor>a85c74f30291d45fd12c959a335ce4519</anchor>
      <arglist>(const t_min_pq *pq)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>queue.h</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/</path>
    <filename>queue_8h</filename>
    <includes id="types_8h" name="types.h" local="yes" imported="no">types.h</includes>
    <includes id="list_8h" name="list.h" local="yes" imported="no">list.h</includes>
    <includes id="utils_8h" name="utils.h" local="yes" imported="no">utils.h</includes>
    <member kind="typedef">
      <type>struct s_list</type>
      <name>t_queue</name>
      <anchorfile>queue_8h.html</anchorfile>
      <anchor>a3c4d3efef4db98e495895a0cb288e6a4</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>queue_enqueue</name>
      <anchorfile>queue_8h.html</anchorfile>
      <anchor>a282684f701f6205b39d2b5f6cd787d1d</anchor>
      <arglist>(t_queue *queue, const void *data)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>queue_dequeue</name>
      <anchorfile>queue_8h.html</anchorfile>
      <anchor>ad4c04b1e1146c9771b95e38fea94b924</anchor>
      <arglist>(t_queue *queue)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>queue_peek</name>
      <anchorfile>queue_8h.html</anchorfile>
      <anchor>ab94f7eb202e9a1f683f6045f571f6109</anchor>
      <arglist>(const t_queue *queue)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>queue_delete</name>
      <anchorfile>queue_8h.html</anchorfile>
      <anchor>a6698d632dc2b07a32eaacebbdba762f4</anchor>
      <arglist>(t_queue *queue)</arglist>
    </member>
    <member kind="function">
      <type>size_t</type>
      <name>queue_size</name>
      <anchorfile>queue_8h.html</anchorfile>
      <anchor>aee45b845fb757af5e2653f9955d4fc27</anchor>
      <arglist>(const t_queue *queue)</arglist>
    </member>
    <member kind="function">
      <type>t_queue *</type>
      <name>queue_new</name>
      <anchorfile>queue_8h.html</anchorfile>
      <anchor>ac891e81f9bb5f1c93752088716b9199e</anchor>
      <arglist>(const t_type *type)</arglist>
    </member>
    <member kind="function">
      <type>t_queue *</type>
      <name>queue_copy</name>
      <anchorfile>queue_8h.html</anchorfile>
      <anchor>a1c579a1c2112ada2eb835bf65e6ba49b</anchor>
      <arglist>(const t_queue *queue)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>queue_copy.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/queue/</path>
    <filename>queue__copy_8c</filename>
    <includes id="queue_8h" name="queue.h" local="yes" imported="no">queue.h</includes>
    <member kind="function">
      <type>t_queue *</type>
      <name>queue_copy</name>
      <anchorfile>queue__copy_8c.html</anchorfile>
      <anchor>a1c579a1c2112ada2eb835bf65e6ba49b</anchor>
      <arglist>(const t_queue *queue)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>queue_delete.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/queue/</path>
    <filename>queue__delete_8c</filename>
    <includes id="queue_8h" name="queue.h" local="yes" imported="no">queue.h</includes>
    <member kind="function">
      <type>void</type>
      <name>queue_delete</name>
      <anchorfile>queue__delete_8c.html</anchorfile>
      <anchor>a6698d632dc2b07a32eaacebbdba762f4</anchor>
      <arglist>(t_queue *queue)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>queue_dequeue.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/queue/</path>
    <filename>queue__dequeue_8c</filename>
    <includes id="queue_8h" name="queue.h" local="yes" imported="no">queue.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>queue_dequeue</name>
      <anchorfile>queue__dequeue_8c.html</anchorfile>
      <anchor>ad4c04b1e1146c9771b95e38fea94b924</anchor>
      <arglist>(t_queue *queue)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>queue_enqueue.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/queue/</path>
    <filename>queue__enqueue_8c</filename>
    <includes id="queue_8h" name="queue.h" local="yes" imported="no">queue.h</includes>
    <member kind="function">
      <type>void</type>
      <name>queue_enqueue</name>
      <anchorfile>queue__enqueue_8c.html</anchorfile>
      <anchor>a282684f701f6205b39d2b5f6cd787d1d</anchor>
      <arglist>(t_queue *queue, const void *data)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>queue_new.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/queue/</path>
    <filename>queue__new_8c</filename>
    <includes id="queue_8h" name="queue.h" local="yes" imported="no">queue.h</includes>
    <member kind="function">
      <type>t_queue *</type>
      <name>queue_new</name>
      <anchorfile>queue__new_8c.html</anchorfile>
      <anchor>ac891e81f9bb5f1c93752088716b9199e</anchor>
      <arglist>(const t_type *type)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>queue_peek.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/queue/</path>
    <filename>queue__peek_8c</filename>
    <includes id="queue_8h" name="queue.h" local="yes" imported="no">queue.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>queue_peek</name>
      <anchorfile>queue__peek_8c.html</anchorfile>
      <anchor>ab94f7eb202e9a1f683f6045f571f6109</anchor>
      <arglist>(const t_queue *queue)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>queue_size.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/queue/</path>
    <filename>queue__size_8c</filename>
    <includes id="queue_8h" name="queue.h" local="yes" imported="no">queue.h</includes>
    <member kind="function">
      <type>size_t</type>
      <name>queue_size</name>
      <anchorfile>queue__size_8c.html</anchorfile>
      <anchor>aee45b845fb757af5e2653f9955d4fc27</anchor>
      <arglist>(const t_queue *queue)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>rbt.h</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/</path>
    <filename>rbt_8h</filename>
    <includes id="types_8h" name="types.h" local="yes" imported="no">types.h</includes>
    <includes id="queue_8h" name="queue.h" local="yes" imported="no">queue.h</includes>
    <includes id="utils_8h" name="utils.h" local="yes" imported="no">utils.h</includes>
    <class kind="struct">s_rbt_node</class>
    <class kind="struct">s_rbt</class>
    <member kind="enumeration">
      <type></type>
      <name>e_rbt_node_color</name>
      <anchorfile>rbt_8h.html</anchorfile>
      <anchor>a2151a0f38adc4849d0e2eb449d6ca4d3</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>t_rbt *</type>
      <name>rbt_new</name>
      <anchorfile>rbt_8h.html</anchorfile>
      <anchor>af50e2b9ed29d63fcad6060e438ad0809</anchor>
      <arglist>(const t_type *key_type, const t_type *val_type)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>rbt_put</name>
      <anchorfile>rbt_8h.html</anchorfile>
      <anchor>aa01464aa52ab087204b35bc7bafda7a0</anchor>
      <arglist>(t_rbt *rbt, const void *key, const void *val)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>rbt_get</name>
      <anchorfile>rbt_8h.html</anchorfile>
      <anchor>ad63f9a51331396993cbb1294166d790e</anchor>
      <arglist>(const t_rbt *rbt, const void *key)</arglist>
    </member>
    <member kind="function">
      <type>size_t</type>
      <name>rbt_size</name>
      <anchorfile>rbt_8h.html</anchorfile>
      <anchor>ad0b3dc122af7749288e74bddae834247</anchor>
      <arglist>(const t_rbt *rbt)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>rbt_delete</name>
      <anchorfile>rbt_8h.html</anchorfile>
      <anchor>a2c1c5ca83ee7d2247aadad897e1be490</anchor>
      <arglist>(t_rbt *rbt)</arglist>
    </member>
    <member kind="function">
      <type>size_t</type>
      <name>rbt_height</name>
      <anchorfile>rbt_8h.html</anchorfile>
      <anchor>a70fac3b861d8e8d3248b80469ddf96ed</anchor>
      <arglist>(const t_rbt *rbt)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>rbt_min</name>
      <anchorfile>rbt_8h.html</anchorfile>
      <anchor>a5902d3ffdd967ed27eaf06dbf9bc3fb6</anchor>
      <arglist>(const t_rbt *rbt)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>rbt_max</name>
      <anchorfile>rbt_8h.html</anchorfile>
      <anchor>a22df42858545ce296540475a62118549</anchor>
      <arglist>(const t_rbt *rbt)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>rbt_floor</name>
      <anchorfile>rbt_8h.html</anchorfile>
      <anchor>ab60fe3f9d350ae18b7f312144e404cbd</anchor>
      <arglist>(const t_rbt *rbt, const void *key)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>rbt_ceil</name>
      <anchorfile>rbt_8h.html</anchorfile>
      <anchor>a9f0722413b788789f31e7ad4087724bc</anchor>
      <arglist>(const t_rbt *rbt, const void *key)</arglist>
    </member>
    <member kind="function">
      <type>size_t</type>
      <name>rbt_rank</name>
      <anchorfile>rbt_8h.html</anchorfile>
      <anchor>a5dd08df504835b5d2e19312dd39c26b7</anchor>
      <arglist>(const t_rbt *rbt, const void *key)</arglist>
    </member>
    <member kind="function">
      <type>t_queue *</type>
      <name>rbt_keys</name>
      <anchorfile>rbt_8h.html</anchorfile>
      <anchor>a20beddd4c3d15379ead12ab5e57d548f</anchor>
      <arglist>(const t_rbt *rbt)</arglist>
    </member>
    <member kind="function">
      <type>t_queue *</type>
      <name>rbt_vals</name>
      <anchorfile>rbt_8h.html</anchorfile>
      <anchor>a76ed25520c44f85e14c9d8645eff46c7</anchor>
      <arglist>(const t_rbt *rbt)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>rbt_contains</name>
      <anchorfile>rbt_8h.html</anchorfile>
      <anchor>a88c6a9c58eda33244e7df6c5c9343882</anchor>
      <arglist>(const t_rbt *rbt, const void *key)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>rbt_nth</name>
      <anchorfile>rbt_8h.html</anchorfile>
      <anchor>a80ef919e59bea3c12d437712fb787d67</anchor>
      <arglist>(const t_rbt *rbt, size_t n)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>rbt_ceil.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/rbt/</path>
    <filename>rbt__ceil_8c</filename>
    <includes id="rbt_8h" name="rbt.h" local="yes" imported="no">rbt.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>rbt_ceil</name>
      <anchorfile>rbt__ceil_8c.html</anchorfile>
      <anchor>a9f0722413b788789f31e7ad4087724bc</anchor>
      <arglist>(const t_rbt *rbt, const void *key)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>rbt_contains.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/rbt/</path>
    <filename>rbt__contains_8c</filename>
    <includes id="rbt_8h" name="rbt.h" local="yes" imported="no">rbt.h</includes>
    <member kind="function">
      <type>int</type>
      <name>rbt_contains</name>
      <anchorfile>rbt__contains_8c.html</anchorfile>
      <anchor>a88c6a9c58eda33244e7df6c5c9343882</anchor>
      <arglist>(const t_rbt *rbt, const void *key)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>rbt_delete.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/rbt/</path>
    <filename>rbt__delete_8c</filename>
    <includes id="rbt_8h" name="rbt.h" local="yes" imported="no">rbt.h</includes>
    <member kind="function">
      <type>void</type>
      <name>rbt_delete</name>
      <anchorfile>rbt__delete_8c.html</anchorfile>
      <anchor>a2c1c5ca83ee7d2247aadad897e1be490</anchor>
      <arglist>(t_rbt *rbt)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>rbt_floor.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/rbt/</path>
    <filename>rbt__floor_8c</filename>
    <includes id="rbt_8h" name="rbt.h" local="yes" imported="no">rbt.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>rbt_floor</name>
      <anchorfile>rbt__floor_8c.html</anchorfile>
      <anchor>ab60fe3f9d350ae18b7f312144e404cbd</anchor>
      <arglist>(const t_rbt *rbt, const void *key)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>rbt_get.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/rbt/</path>
    <filename>rbt__get_8c</filename>
    <includes id="rbt_8h" name="rbt.h" local="yes" imported="no">rbt.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>rbt_get</name>
      <anchorfile>rbt__get_8c.html</anchorfile>
      <anchor>ad63f9a51331396993cbb1294166d790e</anchor>
      <arglist>(const t_rbt *rbt, const void *key)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>rbt_height.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/rbt/</path>
    <filename>rbt__height_8c</filename>
    <includes id="rbt_8h" name="rbt.h" local="yes" imported="no">rbt.h</includes>
    <member kind="function">
      <type>size_t</type>
      <name>rbt_height</name>
      <anchorfile>rbt__height_8c.html</anchorfile>
      <anchor>a70fac3b861d8e8d3248b80469ddf96ed</anchor>
      <arglist>(const t_rbt *rbt)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>rbt_keys.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/rbt/</path>
    <filename>rbt__keys_8c</filename>
    <includes id="rbt_8h" name="rbt.h" local="yes" imported="no">rbt.h</includes>
    <member kind="function">
      <type>t_queue *</type>
      <name>rbt_keys</name>
      <anchorfile>rbt__keys_8c.html</anchorfile>
      <anchor>a20beddd4c3d15379ead12ab5e57d548f</anchor>
      <arglist>(const t_rbt *rbt)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>rbt_max.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/rbt/</path>
    <filename>rbt__max_8c</filename>
    <includes id="rbt_8h" name="rbt.h" local="yes" imported="no">rbt.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>rbt_max</name>
      <anchorfile>rbt__max_8c.html</anchorfile>
      <anchor>a22df42858545ce296540475a62118549</anchor>
      <arglist>(const t_rbt *rbt)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>rbt_min.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/rbt/</path>
    <filename>rbt__min_8c</filename>
    <includes id="rbt_8h" name="rbt.h" local="yes" imported="no">rbt.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>rbt_min</name>
      <anchorfile>rbt__min_8c.html</anchorfile>
      <anchor>a5902d3ffdd967ed27eaf06dbf9bc3fb6</anchor>
      <arglist>(const t_rbt *rbt)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>rbt_new.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/rbt/</path>
    <filename>rbt__new_8c</filename>
    <includes id="rbt_8h" name="rbt.h" local="yes" imported="no">rbt.h</includes>
    <member kind="function">
      <type>t_rbt *</type>
      <name>rbt_new</name>
      <anchorfile>rbt__new_8c.html</anchorfile>
      <anchor>af50e2b9ed29d63fcad6060e438ad0809</anchor>
      <arglist>(const t_type *key_type, const t_type *val_type)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>rbt_nth.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/rbt/</path>
    <filename>rbt__nth_8c</filename>
    <includes id="rbt_8h" name="rbt.h" local="yes" imported="no">rbt.h</includes>
    <includes id="rbt__utils_8h" name="rbt_utils.h" local="yes" imported="no">rbt_utils.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>rbt_nth</name>
      <anchorfile>rbt__nth_8c.html</anchorfile>
      <anchor>a80ef919e59bea3c12d437712fb787d67</anchor>
      <arglist>(const t_rbt *rbt, size_t n)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>rbt_put.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/rbt/</path>
    <filename>rbt__put_8c</filename>
    <includes id="rbt_8h" name="rbt.h" local="yes" imported="no">rbt.h</includes>
    <includes id="rbt__utils_8h" name="rbt_utils.h" local="yes" imported="no">rbt_utils.h</includes>
    <member kind="function">
      <type>void</type>
      <name>rbt_put</name>
      <anchorfile>rbt__put_8c.html</anchorfile>
      <anchor>aa01464aa52ab087204b35bc7bafda7a0</anchor>
      <arglist>(t_rbt *rbt, const void *key, const void *val)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>rbt_rank.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/rbt/</path>
    <filename>rbt__rank_8c</filename>
    <includes id="rbt_8h" name="rbt.h" local="yes" imported="no">rbt.h</includes>
    <includes id="rbt__utils_8h" name="rbt_utils.h" local="yes" imported="no">rbt_utils.h</includes>
    <member kind="function">
      <type>size_t</type>
      <name>rbt_rank</name>
      <anchorfile>rbt__rank_8c.html</anchorfile>
      <anchor>a5dd08df504835b5d2e19312dd39c26b7</anchor>
      <arglist>(const t_rbt *rbt, const void *key)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>rbt_size.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/rbt/</path>
    <filename>rbt__size_8c</filename>
    <includes id="rbt_8h" name="rbt.h" local="yes" imported="no">rbt.h</includes>
    <includes id="rbt__utils_8h" name="rbt_utils.h" local="yes" imported="no">rbt_utils.h</includes>
    <member kind="function">
      <type>size_t</type>
      <name>rbt_size</name>
      <anchorfile>rbt__size_8c.html</anchorfile>
      <anchor>ad0b3dc122af7749288e74bddae834247</anchor>
      <arglist>(const t_rbt *rbt)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>rbt_utils.h</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/rbt/</path>
    <filename>rbt__utils_8h</filename>
    <includes id="rbt_8h" name="rbt.h" local="yes" imported="no">rbt.h</includes>
  </compound>
  <compound kind="file">
    <name>rbt_vals.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/rbt/</path>
    <filename>rbt__vals_8c</filename>
    <includes id="rbt_8h" name="rbt.h" local="yes" imported="no">rbt.h</includes>
    <member kind="function">
      <type>t_queue *</type>
      <name>rbt_vals</name>
      <anchorfile>rbt__vals_8c.html</anchorfile>
      <anchor>a76ed25520c44f85e14c9d8645eff46c7</anchor>
      <arglist>(const t_rbt *rbt)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>rbt_flip_color.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/rbt/utils/</path>
    <filename>rbt__flip__color_8c</filename>
    <includes id="rbt__utils_8h" name="rbt_utils.h" local="yes" imported="no">rbt_utils.h</includes>
  </compound>
  <compound kind="file">
    <name>rbt_is_red_node.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/rbt/utils/</path>
    <filename>rbt__is__red__node_8c</filename>
    <includes id="rbt__utils_8h" name="rbt_utils.h" local="yes" imported="no">rbt_utils.h</includes>
  </compound>
  <compound kind="file">
    <name>rbt_make_node.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/rbt/utils/</path>
    <filename>rbt__make__node_8c</filename>
    <includes id="rbt__utils_8h" name="rbt_utils.h" local="yes" imported="no">rbt_utils.h</includes>
  </compound>
  <compound kind="file">
    <name>rbt_rotate_left.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/rbt/utils/</path>
    <filename>rbt__rotate__left_8c</filename>
    <includes id="rbt__utils_8h" name="rbt_utils.h" local="yes" imported="no">rbt_utils.h</includes>
  </compound>
  <compound kind="file">
    <name>rbt_rotate_right.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/rbt/utils/</path>
    <filename>rbt__rotate__right_8c</filename>
    <includes id="rbt__utils_8h" name="rbt_utils.h" local="yes" imported="no">rbt_utils.h</includes>
  </compound>
  <compound kind="file">
    <name>rbt_size_subtree.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/rbt/utils/</path>
    <filename>rbt__size__subtree_8c</filename>
    <includes id="rbt__utils_8h" name="rbt_utils.h" local="yes" imported="no">rbt_utils.h</includes>
  </compound>
  <compound kind="file">
    <name>stack.h</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/</path>
    <filename>stack_8h</filename>
    <includes id="types_8h" name="types.h" local="yes" imported="no">types.h</includes>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <includes id="utils_8h" name="utils.h" local="yes" imported="no">utils.h</includes>
    <member kind="typedef">
      <type>t_array</type>
      <name>t_stack</name>
      <anchorfile>stack_8h.html</anchorfile>
      <anchor>aabca7e7ebd6d388e2067f3ae852dec6e</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>stack_push</name>
      <anchorfile>stack_8h.html</anchorfile>
      <anchor>a88d0595a4587d22c6aa187f7397edda1</anchor>
      <arglist>(t_stack *stack, const void *data)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>stack_pop</name>
      <anchorfile>stack_8h.html</anchorfile>
      <anchor>ac30fcc7e4ea76399182a338bb7ec1f50</anchor>
      <arglist>(t_stack *stack)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>stack_peek</name>
      <anchorfile>stack_8h.html</anchorfile>
      <anchor>ae31fc026c0ace5690eff5976b6e996f6</anchor>
      <arglist>(const t_stack *stack)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>stack_delete</name>
      <anchorfile>stack_8h.html</anchorfile>
      <anchor>a2f510a4865c5ebb9b559133b131141e0</anchor>
      <arglist>(t_stack *stack)</arglist>
    </member>
    <member kind="function">
      <type>size_t</type>
      <name>stack_size</name>
      <anchorfile>stack_8h.html</anchorfile>
      <anchor>afd420da10a7904803a3592ca25a88635</anchor>
      <arglist>(const t_stack *stack)</arglist>
    </member>
    <member kind="function">
      <type>t_stack *</type>
      <name>stack_new</name>
      <anchorfile>stack_8h.html</anchorfile>
      <anchor>a9314fbb09bf3f332b3422172aa2999a3</anchor>
      <arglist>(const t_type *type)</arglist>
    </member>
    <member kind="function">
      <type>t_stack *</type>
      <name>stack_copy</name>
      <anchorfile>stack_8h.html</anchorfile>
      <anchor>a1af090a22a26a66927cd0093aab043ce</anchor>
      <arglist>(const t_stack *stack)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>stack_copy.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/stack/</path>
    <filename>stack__copy_8c</filename>
    <includes id="stack_8h" name="stack.h" local="yes" imported="no">stack.h</includes>
    <member kind="function">
      <type>t_stack *</type>
      <name>stack_copy</name>
      <anchorfile>stack__copy_8c.html</anchorfile>
      <anchor>a1af090a22a26a66927cd0093aab043ce</anchor>
      <arglist>(const t_stack *stack)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>stack_delete.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/stack/</path>
    <filename>stack__delete_8c</filename>
    <includes id="stack_8h" name="stack.h" local="yes" imported="no">stack.h</includes>
    <member kind="function">
      <type>void</type>
      <name>stack_delete</name>
      <anchorfile>stack__delete_8c.html</anchorfile>
      <anchor>a2f510a4865c5ebb9b559133b131141e0</anchor>
      <arglist>(t_stack *stack)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>stack_new.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/stack/</path>
    <filename>stack__new_8c</filename>
    <includes id="stack_8h" name="stack.h" local="yes" imported="no">stack.h</includes>
    <member kind="function">
      <type>t_stack *</type>
      <name>stack_new</name>
      <anchorfile>stack__new_8c.html</anchorfile>
      <anchor>a9314fbb09bf3f332b3422172aa2999a3</anchor>
      <arglist>(const t_type *type)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>stack_peek.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/stack/</path>
    <filename>stack__peek_8c</filename>
    <includes id="stack_8h" name="stack.h" local="yes" imported="no">stack.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>stack_peek</name>
      <anchorfile>stack__peek_8c.html</anchorfile>
      <anchor>ae31fc026c0ace5690eff5976b6e996f6</anchor>
      <arglist>(const t_stack *stack)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>stack_pop.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/stack/</path>
    <filename>stack__pop_8c</filename>
    <includes id="stack_8h" name="stack.h" local="yes" imported="no">stack.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>stack_pop</name>
      <anchorfile>stack__pop_8c.html</anchorfile>
      <anchor>ac30fcc7e4ea76399182a338bb7ec1f50</anchor>
      <arglist>(t_stack *stack)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>stack_push.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/stack/</path>
    <filename>stack__push_8c</filename>
    <includes id="stack_8h" name="stack.h" local="yes" imported="no">stack.h</includes>
    <member kind="function">
      <type>void</type>
      <name>stack_push</name>
      <anchorfile>stack__push_8c.html</anchorfile>
      <anchor>a88d0595a4587d22c6aa187f7397edda1</anchor>
      <arglist>(t_stack *stack, const void *data)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>stack_size.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/stack/</path>
    <filename>stack__size_8c</filename>
    <includes id="stack_8h" name="stack.h" local="yes" imported="no">stack.h</includes>
    <member kind="function">
      <type>size_t</type>
      <name>stack_size</name>
      <anchorfile>stack__size_8c.html</anchorfile>
      <anchor>afd420da10a7904803a3592ca25a88635</anchor>
      <arglist>(const t_stack *stack)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>union_find.h</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/</path>
    <filename>union__find_8h</filename>
    <includes id="types_8h" name="types.h" local="yes" imported="no">types.h</includes>
    <includes id="utils_8h" name="utils.h" local="yes" imported="no">utils.h</includes>
    <class kind="struct">s_union_find</class>
    <member kind="function">
      <type>t_union_find *</type>
      <name>union_find_new</name>
      <anchorfile>union__find_8h.html</anchorfile>
      <anchor>a859ec92fb593eb31755c0b7822cd320a</anchor>
      <arglist>(size_t size)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>union_find_union</name>
      <anchorfile>union__find_8h.html</anchorfile>
      <anchor>a4166e7f1a37631f1ae4f72e14c6effb1</anchor>
      <arglist>(t_union_find *uf, size_t p, size_t q)</arglist>
    </member>
    <member kind="function">
      <type>size_t</type>
      <name>union_find_count</name>
      <anchorfile>union__find_8h.html</anchorfile>
      <anchor>a0d398f0a3f3bad9789323879f6aabef2</anchor>
      <arglist>(const t_union_find *uf)</arglist>
    </member>
    <member kind="function">
      <type>size_t</type>
      <name>union_find_size</name>
      <anchorfile>union__find_8h.html</anchorfile>
      <anchor>acbd21c61cee345c072b4bcd6897b56ae</anchor>
      <arglist>(const t_union_find *uf)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>union_find_delete</name>
      <anchorfile>union__find_8h.html</anchorfile>
      <anchor>a6cd321938719bd1d6c121798e2285cd7</anchor>
      <arglist>(t_union_find *uf)</arglist>
    </member>
    <member kind="function">
      <type>size_t</type>
      <name>union_find_find</name>
      <anchorfile>union__find_8h.html</anchorfile>
      <anchor>ab628b2d862aad8889437a935c3baf312</anchor>
      <arglist>(const t_union_find *uf, size_t p)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>union_find_count.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/union_find/</path>
    <filename>union__find__count_8c</filename>
    <includes id="union__find_8h" name="union_find.h" local="yes" imported="no">union_find.h</includes>
    <member kind="function">
      <type>size_t</type>
      <name>union_find_count</name>
      <anchorfile>union__find__count_8c.html</anchorfile>
      <anchor>a0d398f0a3f3bad9789323879f6aabef2</anchor>
      <arglist>(const t_union_find *uf)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>union_find_delete.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/union_find/</path>
    <filename>union__find__delete_8c</filename>
    <includes id="union__find_8h" name="union_find.h" local="yes" imported="no">union_find.h</includes>
    <member kind="function">
      <type>void</type>
      <name>union_find_delete</name>
      <anchorfile>union__find__delete_8c.html</anchorfile>
      <anchor>a6cd321938719bd1d6c121798e2285cd7</anchor>
      <arglist>(t_union_find *uf)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>union_find_find.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/union_find/</path>
    <filename>union__find__find_8c</filename>
    <includes id="union__find_8h" name="union_find.h" local="yes" imported="no">union_find.h</includes>
    <member kind="function">
      <type>size_t</type>
      <name>union_find_find</name>
      <anchorfile>union__find__find_8c.html</anchorfile>
      <anchor>ab628b2d862aad8889437a935c3baf312</anchor>
      <arglist>(const t_union_find *uf, size_t p)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>union_find_new.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/union_find/</path>
    <filename>union__find__new_8c</filename>
    <includes id="union__find_8h" name="union_find.h" local="yes" imported="no">union_find.h</includes>
    <member kind="function">
      <type>t_union_find *</type>
      <name>union_find_new</name>
      <anchorfile>union__find__new_8c.html</anchorfile>
      <anchor>a859ec92fb593eb31755c0b7822cd320a</anchor>
      <arglist>(size_t size)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>union_find_size.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/union_find/</path>
    <filename>union__find__size_8c</filename>
    <includes id="union__find_8h" name="union_find.h" local="yes" imported="no">union_find.h</includes>
    <member kind="function">
      <type>size_t</type>
      <name>union_find_size</name>
      <anchorfile>union__find__size_8c.html</anchorfile>
      <anchor>acbd21c61cee345c072b4bcd6897b56ae</anchor>
      <arglist>(const t_union_find *uf)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>union_find_union.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/data_structures/union_find/</path>
    <filename>union__find__union_8c</filename>
    <includes id="union__find_8h" name="union_find.h" local="yes" imported="no">union_find.h</includes>
    <member kind="function">
      <type>void</type>
      <name>union_find_union</name>
      <anchorfile>union__find__union_8c.html</anchorfile>
      <anchor>a4166e7f1a37631f1ae4f72e14c6effb1</anchor>
      <arglist>(t_union_find *uf, size_t p, size_t q)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>data2ptr.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/types/</path>
    <filename>data2ptr_8c</filename>
    <includes id="utils_8h" name="utils.h" local="yes" imported="no">utils.h</includes>
    <member kind="function">
      <type>int *</type>
      <name>int2ptr</name>
      <anchorfile>data2ptr_8c.html</anchorfile>
      <anchor>a80c0883d3c307b9567e7dc63e1206203</anchor>
      <arglist>(int a)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>char2ptr</name>
      <anchorfile>data2ptr_8c.html</anchorfile>
      <anchor>ac428bba0c8e57c7085fd8c4da80b4397</anchor>
      <arglist>(char a)</arglist>
    </member>
    <member kind="function">
      <type>float *</type>
      <name>float2ptr</name>
      <anchorfile>data2ptr_8c.html</anchorfile>
      <anchor>af97288f8ddb7a62b9af17617090da281</anchor>
      <arglist>(float a)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>ptr2data.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/types/</path>
    <filename>ptr2data_8c</filename>
    <includes id="utils_8h" name="utils.h" local="yes" imported="no">utils.h</includes>
    <member kind="function">
      <type>int</type>
      <name>ptr2int</name>
      <anchorfile>ptr2data_8c.html</anchorfile>
      <anchor>aa404616716f45e363e8e86971bc8690a</anchor>
      <arglist>(const void *ptr)</arglist>
    </member>
    <member kind="function">
      <type>float</type>
      <name>ptr2float</name>
      <anchorfile>ptr2data_8c.html</anchorfile>
      <anchor>a34d308c396b5d1843dca4dc455a6ecc2</anchor>
      <arglist>(const void *ptr)</arglist>
    </member>
    <member kind="function">
      <type>char</type>
      <name>ptr2char</name>
      <anchorfile>ptr2data_8c.html</anchorfile>
      <anchor>aed5a1898315a6858320d0708ab75849f</anchor>
      <arglist>(const void *ptr)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>type_array.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/types/</path>
    <filename>type__array_8c</filename>
    <includes id="types_8h" name="types.h" local="yes" imported="no">types.h</includes>
    <includes id="array_8h" name="array.h" local="yes" imported="no">array.h</includes>
    <member kind="variable">
      <type>const t_type *</type>
      <name>g_type_array</name>
      <anchorfile>type__array_8c.html</anchorfile>
      <anchor>abc5ccb1d2d6754827295ec02c1955268</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>type_char.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/types/</path>
    <filename>type__char_8c</filename>
    <includes id="types_8h" name="types.h" local="yes" imported="no">types.h</includes>
    <member kind="variable">
      <type>const t_type *</type>
      <name>g_type_char</name>
      <anchorfile>type__char_8c.html</anchorfile>
      <anchor>a9d04a5e94044f6e27f8221f550734a50</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>type_float.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/types/</path>
    <filename>type__float_8c</filename>
    <includes id="types_8h" name="types.h" local="yes" imported="no">types.h</includes>
    <member kind="variable">
      <type>const t_type *</type>
      <name>g_type_float</name>
      <anchorfile>type__float_8c.html</anchorfile>
      <anchor>a1e36cd7c196c22e8ed243a4d87bf58f5</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>type_hashset.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/types/</path>
    <filename>type__hashset_8c</filename>
    <includes id="types_8h" name="types.h" local="yes" imported="no">types.h</includes>
    <includes id="hashset_8h" name="hashset.h" local="yes" imported="no">hashset.h</includes>
  </compound>
  <compound kind="file">
    <name>type_int.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/types/</path>
    <filename>type__int_8c</filename>
    <includes id="types_8h" name="types.h" local="yes" imported="no">types.h</includes>
    <member kind="variable">
      <type>const t_type *</type>
      <name>g_type_int</name>
      <anchorfile>type__int_8c.html</anchorfile>
      <anchor>af215681a167e8f582280d5b7c751385e</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>type_str.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/types/</path>
    <filename>type__str_8c</filename>
    <includes id="types_8h" name="types.h" local="yes" imported="no">types.h</includes>
    <member kind="variable">
      <type>const t_type *</type>
      <name>g_type_str</name>
      <anchorfile>type__str_8c.html</anchorfile>
      <anchor>a8278aff799b837e44a459484cc2f5fdb</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>types.h</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/types/</path>
    <filename>types_8h</filename>
    <includes id="utils_8h" name="utils.h" local="yes" imported="no">utils.h</includes>
    <class kind="struct">s_type</class>
    <member kind="function">
      <type>int *</type>
      <name>int2ptr</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a80c0883d3c307b9567e7dc63e1206203</anchor>
      <arglist>(int a)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>char2ptr</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>ac428bba0c8e57c7085fd8c4da80b4397</anchor>
      <arglist>(char a)</arglist>
    </member>
    <member kind="function">
      <type>float *</type>
      <name>float2ptr</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>af97288f8ddb7a62b9af17617090da281</anchor>
      <arglist>(float a)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>ptr2int</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>aa404616716f45e363e8e86971bc8690a</anchor>
      <arglist>(const void *ptr)</arglist>
    </member>
    <member kind="function">
      <type>char</type>
      <name>ptr2char</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>aed5a1898315a6858320d0708ab75849f</anchor>
      <arglist>(const void *ptr)</arglist>
    </member>
    <member kind="function">
      <type>float</type>
      <name>ptr2float</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a34d308c396b5d1843dca4dc455a6ecc2</anchor>
      <arglist>(const void *ptr)</arglist>
    </member>
    <member kind="variable">
      <type>const t_type *</type>
      <name>g_type_char</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a9d04a5e94044f6e27f8221f550734a50</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const t_type *</type>
      <name>g_type_float</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a1e36cd7c196c22e8ed243a4d87bf58f5</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const t_type *</type>
      <name>g_type_int</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>af215681a167e8f582280d5b7c751385e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const t_type *</type>
      <name>g_type_str</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>a8278aff799b837e44a459484cc2f5fdb</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const t_type *</type>
      <name>g_type_array</name>
      <anchorfile>types_8h.html</anchorfile>
      <anchor>abc5ccb1d2d6754827295ec02c1955268</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>ds_bzero.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/utils/</path>
    <filename>ds__bzero_8c</filename>
    <includes id="utils_8h" name="utils.h" local="yes" imported="no">utils.h</includes>
    <member kind="function">
      <type>void</type>
      <name>ds_bzero</name>
      <anchorfile>ds__bzero_8c.html</anchorfile>
      <anchor>a8c5806446d7e41c8c08eba87711f047a</anchor>
      <arglist>(void *s, size_t n)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>ds_exit.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/utils/</path>
    <filename>ds__exit_8c</filename>
    <includes id="utils_8h" name="utils.h" local="yes" imported="no">utils.h</includes>
    <member kind="function">
      <type>void</type>
      <name>ds_exit</name>
      <anchorfile>ds__exit_8c.html</anchorfile>
      <anchor>ae3b39622503c5ebf28247f3b5ac9ccf5</anchor>
      <arglist>(void)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>ds_exit_set.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/utils/</path>
    <filename>ds__exit__set_8c</filename>
    <includes id="utils_8h" name="utils.h" local="yes" imported="no">utils.h</includes>
    <member kind="function">
      <type>void</type>
      <name>ds_exit_set</name>
      <anchorfile>ds__exit__set_8c.html</anchorfile>
      <anchor>a1465a802cddd1a10dce59aa7a988ca15</anchor>
      <arglist>(int err)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>ds_strcmp.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/utils/</path>
    <filename>ds__strcmp_8c</filename>
    <includes id="utils_8h" name="utils.h" local="yes" imported="no">utils.h</includes>
    <member kind="function">
      <type>int</type>
      <name>ds_strcmp</name>
      <anchorfile>ds__strcmp_8c.html</anchorfile>
      <anchor>a08baeb3e1b8f615dc8b94700fcea8e5a</anchor>
      <arglist>(const char *s1, const char *s2)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>ds_strdup.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/utils/</path>
    <filename>ds__strdup_8c</filename>
    <includes id="utils_8h" name="utils.h" local="yes" imported="no">utils.h</includes>
    <member kind="function">
      <type>char *</type>
      <name>ds_strdup</name>
      <anchorfile>ds__strdup_8c.html</anchorfile>
      <anchor>a54e5f987803a4699c0a1c8d826e10e68</anchor>
      <arglist>(const char *s1)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>ds_strlen.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/utils/</path>
    <filename>ds__strlen_8c</filename>
    <includes id="utils_8h" name="utils.h" local="yes" imported="no">utils.h</includes>
    <member kind="function">
      <type>size_t</type>
      <name>ds_strlen</name>
      <anchorfile>ds__strlen_8c.html</anchorfile>
      <anchor>a6ab7d7a7f8358df16b632993aa68c011</anchor>
      <arglist>(const char *s)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>ds_xcalloc.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/utils/</path>
    <filename>ds__xcalloc_8c</filename>
    <includes id="utils_8h" name="utils.h" local="yes" imported="no">utils.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>ds_xcalloc</name>
      <anchorfile>ds__xcalloc_8c.html</anchorfile>
      <anchor>a8932b60a98e1e53ddf2b85ddc60bab50</anchor>
      <arglist>(size_t count, size_t size)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>ds_xmalloc.c</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/utils/</path>
    <filename>ds__xmalloc_8c</filename>
    <includes id="utils_8h" name="utils.h" local="yes" imported="no">utils.h</includes>
    <member kind="function">
      <type>void *</type>
      <name>ds_xmalloc</name>
      <anchorfile>ds__xmalloc_8c.html</anchorfile>
      <anchor>ac44f1554bc0ebac58cb8b939fe886e71</anchor>
      <arglist>(size_t size)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>utils.h</name>
    <path>/Users/almayor/Documents/programming/42/data_structures/src/utils/</path>
    <filename>utils_8h</filename>
    <member kind="function">
      <type>void</type>
      <name>ds_bzero</name>
      <anchorfile>utils_8h.html</anchorfile>
      <anchor>a8c5806446d7e41c8c08eba87711f047a</anchor>
      <arglist>(void *s, size_t n)</arglist>
    </member>
    <member kind="function">
      <type>size_t</type>
      <name>ds_strlen</name>
      <anchorfile>utils_8h.html</anchorfile>
      <anchor>a6ab7d7a7f8358df16b632993aa68c011</anchor>
      <arglist>(const char *s)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>ds_strcmp</name>
      <anchorfile>utils_8h.html</anchorfile>
      <anchor>a08baeb3e1b8f615dc8b94700fcea8e5a</anchor>
      <arglist>(const char *s1, const char *s2)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>ds_xcalloc</name>
      <anchorfile>utils_8h.html</anchorfile>
      <anchor>a8932b60a98e1e53ddf2b85ddc60bab50</anchor>
      <arglist>(size_t count, size_t size)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>ds_xmalloc</name>
      <anchorfile>utils_8h.html</anchorfile>
      <anchor>ac44f1554bc0ebac58cb8b939fe886e71</anchor>
      <arglist>(size_t size)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>ds_strdup</name>
      <anchorfile>utils_8h.html</anchorfile>
      <anchor>a54e5f987803a4699c0a1c8d826e10e68</anchor>
      <arglist>(const char *s1)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ds_exit</name>
      <anchorfile>utils_8h.html</anchorfile>
      <anchor>ae3b39622503c5ebf28247f3b5ac9ccf5</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ds_exit_set</name>
      <anchorfile>utils_8h.html</anchorfile>
      <anchor>a1465a802cddd1a10dce59aa7a988ca15</anchor>
      <arglist>(int err)</arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>s_array</name>
    <filename>structs__array.html</filename>
    <member kind="variable">
      <type>size_t</type>
      <name>size</name>
      <anchorfile>structs__array.html</anchorfile>
      <anchor>a0626ef6ec47ebb005269b3b0d7f9c246</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>size_t</type>
      <name>capacity</name>
      <anchorfile>structs__array.html</anchorfile>
      <anchor>a3ee5e358dd4dffda00d49d6362484249</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>void **</type>
      <name>arr</name>
      <anchorfile>structs__array.html</anchorfile>
      <anchor>af3619b8a829a3212c36ace76cb6d24eb</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const t_type *</type>
      <name>type</name>
      <anchorfile>structs__array.html</anchorfile>
      <anchor>a8c3652bc84ab1ac58ad4a50402cf0b41</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>s_bst</name>
    <filename>structs__bst.html</filename>
    <member kind="variable">
      <type>t_bst_node *</type>
      <name>root</name>
      <anchorfile>structs__bst.html</anchorfile>
      <anchor>a9d6a4569a61b72711275f46aaee6a257</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>size_t</type>
      <name>size</name>
      <anchorfile>structs__bst.html</anchorfile>
      <anchor>ae1777c7231e7dde94251e9086d3888dc</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const t_type *</type>
      <name>key_type</name>
      <anchorfile>structs__bst.html</anchorfile>
      <anchor>ab57a82eaf894fe5754c6078afa365a97</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const t_type *</type>
      <name>val_type</name>
      <anchorfile>structs__bst.html</anchorfile>
      <anchor>a202cc14ed0c4359f990c3cb6f4b75bf9</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>s_bst_node</name>
    <filename>structs__bst__node.html</filename>
    <member kind="variable">
      <type>void *</type>
      <name>key</name>
      <anchorfile>structs__bst__node.html</anchorfile>
      <anchor>af3a7672a4feb025e65e35c6acd7d73ae</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>void *</type>
      <name>val</name>
      <anchorfile>structs__bst__node.html</anchorfile>
      <anchor>ae1cf718daaf0413b74d39ff108213f89</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>struct s_bst_node *</type>
      <name>left</name>
      <anchorfile>structs__bst__node.html</anchorfile>
      <anchor>ab0d1ae31cc0b1aacdcdbb7d5b402b34c</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>struct s_bst_node *</type>
      <name>right</name>
      <anchorfile>structs__bst__node.html</anchorfile>
      <anchor>a4b640bf754c2a9eb1236aead6685d41f</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>s_graph</name>
    <filename>structs__graph.html</filename>
    <member kind="variable">
      <type>size_t</type>
      <name>v</name>
      <anchorfile>structs__graph.html</anchorfile>
      <anchor>a8c53fba75f8d22ad19cf98d6beb2d301</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>size_t</type>
      <name>e</name>
      <anchorfile>structs__graph.html</anchorfile>
      <anchor>a7510ead17e88e0915f4829290e8475b8</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>t_rbt *</type>
      <name>adj</name>
      <anchorfile>structs__graph.html</anchorfile>
      <anchor>ac62d642e1a23330862d4964c0e4f6746</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const t_type *</type>
      <name>type</name>
      <anchorfile>structs__graph.html</anchorfile>
      <anchor>aba431eb336a8b87ce63400cbb1a866ac</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>s_hashmap</name>
    <filename>structs__hashmap.html</filename>
    <member kind="variable">
      <type>void **</type>
      <name>keys</name>
      <anchorfile>structs__hashmap.html</anchorfile>
      <anchor>a8db4e8e08a620cac5f060711f195f346</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>void **</type>
      <name>vals</name>
      <anchorfile>structs__hashmap.html</anchorfile>
      <anchor>ae6d153e2544bae1acb8de7cb02085fe1</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>size_t</type>
      <name>size</name>
      <anchorfile>structs__hashmap.html</anchorfile>
      <anchor>a67c25c43af7ac90e984dfe6b9f62c7b4</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>size_t</type>
      <name>capacity</name>
      <anchorfile>structs__hashmap.html</anchorfile>
      <anchor>ac711071b70ed21ff7c4f1f9a5641c8b2</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const t_type *</type>
      <name>key_type</name>
      <anchorfile>structs__hashmap.html</anchorfile>
      <anchor>aab8b31ff63fa3ef323569659d7487239</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const t_type *</type>
      <name>val_type</name>
      <anchorfile>structs__hashmap.html</anchorfile>
      <anchor>a3d63e67145074b1fda6a744f6926814e</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>s_hashset</name>
    <filename>structs__hashset.html</filename>
    <member kind="variable">
      <type>void **</type>
      <name>vals</name>
      <anchorfile>structs__hashset.html</anchorfile>
      <anchor>aa4390dd34833ffcf103fcf64b05f434a</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>size_t</type>
      <name>size</name>
      <anchorfile>structs__hashset.html</anchorfile>
      <anchor>ae78ddeec0627a0af2c668bf918c6d1a3</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>size_t</type>
      <name>capacity</name>
      <anchorfile>structs__hashset.html</anchorfile>
      <anchor>addc48de200f35919e18a0ffcc2c9f154</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const t_type *</type>
      <name>type</name>
      <anchorfile>structs__hashset.html</anchorfile>
      <anchor>a720835a1fea5473618c2f27611a7817f</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>s_link</name>
    <filename>structs__link.html</filename>
    <member kind="variable">
      <type>void *</type>
      <name>content</name>
      <anchorfile>structs__link.html</anchorfile>
      <anchor>a83f53c8a8f95dd4d17f664c8b6d6f2e1</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>struct s_link *</type>
      <name>next</name>
      <anchorfile>structs__link.html</anchorfile>
      <anchor>a7dfdffee2e3c14c4f52ab78da2204cc9</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>struct s_link *</type>
      <name>prev</name>
      <anchorfile>structs__link.html</anchorfile>
      <anchor>a3c7530e04b763d544ce62e510b666b1a</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>s_list</name>
    <filename>structs__list.html</filename>
    <member kind="variable">
      <type>t_link *</type>
      <name>head</name>
      <anchorfile>structs__list.html</anchorfile>
      <anchor>af222b43290e12d08dd57530ebc7f672b</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>t_link *</type>
      <name>tail</name>
      <anchorfile>structs__list.html</anchorfile>
      <anchor>a34c85ecf7803f11cb86886c9e9967c19</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>size_t</type>
      <name>size</name>
      <anchorfile>structs__list.html</anchorfile>
      <anchor>ac322563dbbb8c1dafd814734cfa689f1</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const t_type *</type>
      <name>type</name>
      <anchorfile>structs__list.html</anchorfile>
      <anchor>a8b1086c63e25d077e429f1e76b9b4981</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>s_rbt</name>
    <filename>structs__rbt.html</filename>
    <member kind="variable">
      <type>t_rbt_node *</type>
      <name>root</name>
      <anchorfile>structs__rbt.html</anchorfile>
      <anchor>ae4f3d3a24ce75d50949dd04e7e33635e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const t_type *</type>
      <name>key_type</name>
      <anchorfile>structs__rbt.html</anchorfile>
      <anchor>a4aabcc03b6eb9409585006615ea34c8e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const t_type *</type>
      <name>val_type</name>
      <anchorfile>structs__rbt.html</anchorfile>
      <anchor>ae3b3ef5b524630e747bea6f02ab1a761</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>s_rbt_node</name>
    <filename>structs__rbt__node.html</filename>
    <member kind="variable">
      <type>void *</type>
      <name>key</name>
      <anchorfile>structs__rbt__node.html</anchorfile>
      <anchor>adc7909f8845629e5ee5ca2402cf002a8</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>void *</type>
      <name>val</name>
      <anchorfile>structs__rbt__node.html</anchorfile>
      <anchor>a17a01c1cacf23a22b8aac62834a73122</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>struct s_rbt_node *</type>
      <name>left</name>
      <anchorfile>structs__rbt__node.html</anchorfile>
      <anchor>a9ed491c816fca4273b0bfd8b371e4a55</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>struct s_rbt_node *</type>
      <name>right</name>
      <anchorfile>structs__rbt__node.html</anchorfile>
      <anchor>ad0d181c3b183be02f0c8ba292e2620cc</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>t_rbt_node_color</type>
      <name>color</name>
      <anchorfile>structs__rbt__node.html</anchorfile>
      <anchor>a2d2bafcafb31fc71fa1a7b738a2ba605</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>size_t</type>
      <name>count</name>
      <anchorfile>structs__rbt__node.html</anchorfile>
      <anchor>a1252f44812fe15020cb458712a9fa79b</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>s_type</name>
    <filename>structs__type.html</filename>
    <member kind="variable">
      <type>char *</type>
      <name>name</name>
      <anchorfile>structs__type.html</anchorfile>
      <anchor>a1ebf8afa3786ea67e2531f5d75cd5b30</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>void *(*</type>
      <name>copy</name>
      <anchorfile>structs__type.html</anchorfile>
      <anchor>a9b525f19979fe7919661d68afcbb622c</anchor>
      <arglist>)(const void *)</arglist>
    </member>
    <member kind="variable">
      <type>void(*</type>
      <name>del</name>
      <anchorfile>structs__type.html</anchorfile>
      <anchor>ac820bed406ee8c3aa26b1cfe110cc63d</anchor>
      <arglist>)(void *)</arglist>
    </member>
    <member kind="variable">
      <type>int(*</type>
      <name>cmp</name>
      <anchorfile>structs__type.html</anchorfile>
      <anchor>a446d2d46d66404fe85cb99a2977ee65e</anchor>
      <arglist>)(const void *, const void *)</arglist>
    </member>
    <member kind="variable">
      <type>size_t(*</type>
      <name>hash</name>
      <anchorfile>structs__type.html</anchorfile>
      <anchor>a979748f91ffbaacacdcf3a51864a9560</anchor>
      <arglist>)(const void *, size_t)</arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>s_union_find</name>
    <filename>structs__union__find.html</filename>
    <member kind="variable">
      <type>size_t *</type>
      <name>parent</name>
      <anchorfile>structs__union__find.html</anchorfile>
      <anchor>a95ac64a173a308bd877c3f9a91e57961</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>size_t *</type>
      <name>nchild</name>
      <anchorfile>structs__union__find.html</anchorfile>
      <anchor>a2ea13014caf304f4cbe247709bc07cb8</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>size_t</type>
      <name>size</name>
      <anchorfile>structs__union__find.html</anchorfile>
      <anchor>ade01768e69d02fafcec44fe1451c6a1f</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>size_t</type>
      <name>count</name>
      <anchorfile>structs__union__find.html</anchorfile>
      <anchor>a7f7d0fc02d73f8bd0a9b06d19f7ef6e3</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="page">
    <name>index</name>
    <title></title>
    <filename>index</filename>
    <docanchor file="index">Overview</docanchor>
    <docanchor file="index">Acknowledgements</docanchor>
  </compound>
</tagfile>
